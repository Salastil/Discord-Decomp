package th;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class n implements uh.g {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18515d;

    /* renamed from: e, reason: collision with root package name */
    public final rd.u f18516e;

    /* renamed from: i, reason: collision with root package name */
    public final uh.f f18517i;

    /* renamed from: v, reason: collision with root package name */
    public final uh.f f18518v;

    public /* synthetic */ n(rd.u uVar, uh.f fVar, uh.f fVar2, int i5) {
        this.f18515d = i5;
        this.f18516e = uVar;
        this.f18517i = fVar;
        this.f18518v = fVar2;
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0044  */
    @Override // uh.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object a() {
        String str;
        Bundle bundle;
        switch (this.f18515d) {
            case 0:
                return new m(((di.p) this.f18516e.f17275e).f7601d, (p0) this.f18517i.a(), (g1) this.f18518v.a());
            default:
                Context context = ((di.p) this.f18516e.f17275e).f7601d;
                uh.f fVar = new uh.f(new rd.u(7, this.f18517i));
                uh.f fVar2 = new uh.f(new rd.u(7, this.f18518v));
                try {
                    bundle = context.getPackageManager().getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData;
                } catch (PackageManager.NameNotFoundException unused) {
                }
                if (bundle != null) {
                    str = bundle.getString("local_testing_dir");
                    u1 u1Var = str != null ? (u1) fVar.a() : (u1) fVar2.a();
                    a5.k0.c(u1Var);
                    return u1Var;
                }
                str = null;
                if (str != null) {
                }
                a5.k0.c(u1Var);
                return u1Var;
        }
    }
}
