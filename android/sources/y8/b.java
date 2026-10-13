package y8;

import com.facebook.datasource.DataSource;
import com.facebook.datasource.DataSubscriber;

/* loaded from: classes3.dex */
public abstract class b implements DataSubscriber {
    @Override // com.facebook.datasource.DataSubscriber
    public void onFailure(DataSource dataSource) {
        try {
            onFailureImpl(dataSource);
        } finally {
            dataSource.close();
        }
    }

    public abstract void onFailureImpl(DataSource dataSource);

    @Override // com.facebook.datasource.DataSubscriber
    public void onNewResult(DataSource dataSource) {
        boolean isFinished = dataSource.isFinished();
        try {
            onNewResultImpl(dataSource);
        } finally {
            if (isFinished) {
                dataSource.close();
            }
        }
    }

    public abstract void onNewResultImpl(DataSource dataSource);

    @Override // com.facebook.datasource.DataSubscriber
    public void onCancellation(DataSource dataSource) {
    }

    @Override // com.facebook.datasource.DataSubscriber
    public void onProgressUpdate(DataSource dataSource) {
    }
}
