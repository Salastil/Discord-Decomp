package y8;

import com.facebook.datasource.DataSource;
import com.facebook.datasource.DataSubscriber;

/* loaded from: classes3.dex */
public final class d implements DataSubscriber {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ e f20676b;

    public d(e eVar, int i5) {
        this.f20676b = eVar;
        this.a = i5;
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onFailure(DataSource dataSource) {
        e.l(this.f20676b, this.a, dataSource);
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0033  */
    @Override // com.facebook.datasource.DataSubscriber
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onNewResult(DataSource dataSource) {
        Throwable th2;
        int i5;
        if (!dataSource.a()) {
            if (dataSource.isFinished()) {
                e.l(this.f20676b, this.a, dataSource);
                return;
            }
            return;
        }
        e eVar = this.f20676b;
        int i6 = this.a;
        boolean isFinished = dataSource.isFinished();
        synchronized (eVar) {
            try {
                int i10 = eVar.f20678i;
                if (dataSource == eVar.n(i6) && i6 != eVar.f20678i) {
                    if (eVar.o() != null && (!isFinished || i6 >= eVar.f20678i)) {
                        i5 = i10;
                        while (i10 > i5) {
                            DataSource m5 = eVar.m(i10);
                            if (m5 != null) {
                                m5.close();
                            }
                            i10--;
                        }
                    }
                    eVar.f20678i = i6;
                    i5 = i6;
                    while (i10 > i5) {
                    }
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
        if (dataSource == eVar.o()) {
            eVar.j(null, i6 == 0 && dataSource.isFinished(), dataSource.getExtras());
        }
        if (eVar.k.incrementAndGet() != eVar.j || (th2 = eVar.f20679l) == null) {
            return;
        }
        eVar.h(th2, eVar.f20680m);
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onProgressUpdate(DataSource dataSource) {
        if (this.a == 0) {
            this.f20676b.i(dataSource.c());
        }
    }

    @Override // com.facebook.datasource.DataSubscriber
    public final void onCancellation(DataSource dataSource) {
    }
}
