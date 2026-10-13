package g9;

import com.facebook.datasource.DataSource;
import com.facebook.drawee.generic.GenericDraweeHierarchy;

/* loaded from: classes3.dex */
public final class a extends y8.b {
    public final /* synthetic */ String a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ boolean f9119b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ c f9120c;

    public a(c cVar, String str, boolean z5) {
        this.f9120c = cVar;
        this.a = str;
        this.f9119b = z5;
    }

    @Override // y8.b
    public final void onFailureImpl(DataSource dataSource) {
        this.f9120c.k(this.a, dataSource, dataSource.b(), true);
    }

    @Override // y8.b
    public final void onNewResultImpl(DataSource dataSource) {
        boolean isFinished = dataSource.isFinished();
        float c6 = dataSource.c();
        Object result = dataSource.getResult();
        c cVar = this.f9120c;
        if (result != null) {
            cVar.l(this.a, dataSource, result, c6, isFinished, this.f9119b, false);
        } else if (isFinished) {
            cVar.k(this.a, dataSource, new NullPointerException(), true);
        }
    }

    @Override // y8.b, com.facebook.datasource.DataSubscriber
    public final void onProgressUpdate(DataSource dataSource) {
        boolean isFinished = dataSource.isFinished();
        float c6 = dataSource.c();
        String str = this.a;
        c cVar = this.f9120c;
        if (!cVar.g(str, dataSource)) {
            cVar.h("ignore_old_datasource @ onProgress", null);
            dataSource.close();
        } else {
            if (isFinished) {
                return;
            }
            GenericDraweeHierarchy genericDraweeHierarchy = cVar.f9128f;
            com.facebook.drawee.drawable.d dVar = genericDraweeHierarchy.f4480e;
            if (dVar.c(3) == null) {
                return;
            }
            dVar.O++;
            genericDraweeHierarchy.o(c6);
            dVar.a();
        }
    }
}
