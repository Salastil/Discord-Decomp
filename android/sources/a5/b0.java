package a5;

import android.os.Parcel;
import com.google.android.gms.internal.play_billing.x4;

/* loaded from: classes.dex */
public final class b0 extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final x4 f149g;

    public b0(x4 x4Var) {
        super("com.google.android.apps.play.billingtestcompanion.aidl.IBillingOverrideServiceCallback", 3);
        this.f149g = x4Var;
    }

    @Override // ag.a
    public final boolean t(int i5, Parcel parcel, Parcel parcel2) {
        if (i5 != 1) {
            return false;
        }
        int readInt = parcel.readInt();
        ag.a.v(parcel);
        this.f149g.a(Integer.valueOf(readInt));
        return true;
    }
}
