package y8;

import com.facebook.datasource.DataSource;
import com.facebook.datasource.DataSubscriber;
import java.util.concurrent.CountDownLatch;

/* loaded from: classes3.dex */
public final class c implements DataSubscriber {
    public final /* synthetic */ l1.d a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CountDownLatch f20674b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ l1.d f20675c;

    public c(l1.d dVar, CountDownLatch countDownLatch, l1.d dVar2) {
        this.a = dVar;
        this.f20674b = countDownLatch;
        this.f20675c = dVar2;
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onCancellation(DataSource dataSource) {
        this.f20674b.countDown();
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onFailure(DataSource dataSource) {
        CountDownLatch countDownLatch = this.f20674b;
        try {
            this.f20675c.a = dataSource.b();
        } finally {
            countDownLatch.countDown();
        }
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onNewResult(DataSource dataSource) {
        CountDownLatch countDownLatch = this.f20674b;
        if (dataSource.isFinished()) {
            try {
                this.a.a = dataSource.getResult();
            } finally {
                countDownLatch.countDown();
            }
        }
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onProgressUpdate(DataSource dataSource) {
    }
}
