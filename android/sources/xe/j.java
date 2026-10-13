package xe;

import android.os.Bundle;
import android.util.Log;

/* loaded from: classes3.dex */
public final class j {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final jg.g f20415b = new jg.g();

    /* renamed from: c, reason: collision with root package name */
    public final int f20416c;

    /* renamed from: d, reason: collision with root package name */
    public final Bundle f20417d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f20418e;

    public j(int i5, int i6, Bundle bundle, int i10) {
        this.f20418e = i10;
        this.a = i5;
        this.f20416c = i6;
        this.f20417d = bundle;
    }

    public final boolean a() {
        switch (this.f20418e) {
            case 0:
                return true;
            default:
                return false;
        }
    }

    public final void b(ap.a aVar) {
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            Log.d("MessengerIpcClient", "Failing " + toString() + " with " + aVar.toString());
        }
        this.f20415b.a(aVar);
    }

    public final void c(Bundle bundle) {
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            Log.d("MessengerIpcClient", "Finishing " + toString() + " with " + String.valueOf(bundle));
        }
        this.f20415b.b(bundle);
    }

    public final String toString() {
        return "Request { what=" + this.f20416c + " id=" + this.a + " oneWay=" + a() + "}";
    }
}
