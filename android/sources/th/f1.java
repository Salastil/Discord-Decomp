package th;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class f1 implements uh.g {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18449d;

    /* renamed from: e, reason: collision with root package name */
    public final rd.u f18450e;

    public /* synthetic */ f1(rd.u uVar, int i5) {
        this.f18449d = i5;
        this.f18450e = uVar;
    }

    @Override // uh.g
    public final Object a() {
        switch (this.f18449d) {
            case 0:
                return new e1(((di.p) this.f18450e.f17275e).f7601d);
            default:
                Context context = ((di.p) this.f18450e.f17275e).f7601d;
                try {
                    Bundle bundle = context.getPackageManager().getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData;
                    if (bundle != null) {
                        return bundle.getString("local_testing_dir");
                    }
                } catch (PackageManager.NameNotFoundException unused) {
                }
                return null;
        }
    }
}
