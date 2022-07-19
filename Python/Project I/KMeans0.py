import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

def distance(x1, x2):
    return np.sqrt(np.sum((x1 - x2)**2, axis=1))

epsilon = [[0, 0], [0, 0], [0, 0]]
epsilon = np.array(epsilon)

class KMeans():
    def __init__(self, X, num_clusters):
        self.K = num_clusters
        self.plot_figure = True
        self.max_iters = 100
        self.num_examples, self.num_features = X.shape

    def sinh_ngau_nhien_tam_cum(self, X):
        centroids = np.zeros((self.K, self.num_features))

        for k in range(self.K):
            centroid = X[np.random.choice(range(self.num_examples))]
            centroids[k] = centroid
        # print(centroids)
        return centroids
        
    def sinh_cum(self, X, centroids):
        clusters = [[] for _ in range(self.K)]

        for point_idx, point in enumerate(X):
            closest_centroid = np.argmin(distance(point, centroids))
            clusters[closest_centroid].append(point_idx)
        return clusters

    def tinh_tam_moi(self, clusters, X):
        centroids = np.zeros((self.K, self.num_features))

        for idx, cluster in enumerate(clusters):
            new_centroid = np.mean(X[cluster], axis=0)
            centroids[idx] = new_centroid
            #print(centroids[idx])
        # print("\n")
        return centroids

    def gan_nhan(self, clusters, X):
        y_pred = np.zeros(self.num_examples)

        for cluster_idx, cluster in enumerate(clusters):
            for sample_idx in cluster:
                y_pred[sample_idx] = cluster_idx
        return y_pred

    def bieu_dien(self, X, y, centroids):
        plt.scatter(X[:,0], X[:,1], c=y, s=40, cmap=plt.cm.Spectral, alpha=0.75)
        plt.scatter(centroids[:,0], centroids[:,1], marker='*')
        plt.show()

    def fit(self, X):
        centroids = self.sinh_ngau_nhien_tam_cum(X)

        for it in range(self.max_iters):
            clusters = self.sinh_cum(X, centroids)
            prev_centroids = centroids
            centroids = self.tinh_tam_moi(clusters, X)

            diff = np.abs(centroids - prev_centroids)
            
            if not diff.all():
                print("K-Means hoi tu !")
                print("Toa do cua cac tam cum la: ")
                print(centroids)
                break

        y_pred = self.gan_nhan(clusters, X)

        if self.plot_figure:
            self.bieu_dien(X, y_pred, centroids)
        return y_pred

if __name__ == '__main__':
    num_clusters = 5
    X = pd.read_csv('1fXr31hcEemkYxLyQ1aU1g_50fc36ee697c4b158fe26ade3ec3bc24_Banknote-authentication-dataset-.csv')
    X = np.array(X)
    kmeans = KMeans(X, num_clusters)
    y_pred = kmeans.fit(X)    