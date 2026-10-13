package af;

import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.BasePendingResult;
import java.util.Map;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class l implements ze.m {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ta.a f568b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f569c;

    public l(e4.c cVar, BasePendingResult basePendingResult) {
        this.f569c = cVar;
        this.f568b = basePendingResult;
    }

    @Override // ze.m
    public final void a(Status status) {
        switch (this.a) {
            case 0:
                ((Map) ((e4.c) this.f569c).f7939e).remove((BasePendingResult) this.f568b);
                break;
            default:
                jg.g gVar = (jg.g) this.f569c;
                if (status.f5657d > 0) {
                    gVar.a(status.f5659i != null ? new qh.a(status) : new ze.e(status));
                    break;
                } else {
                    this.f568b.await(0L, TimeUnit.MILLISECONDS);
                    gVar.b(null);
                    break;
                }
        }
    }

    public l(ta.a aVar, jg.g gVar, wi.d dVar) {
        this.f568b = aVar;
        this.f569c = gVar;
    }
}
