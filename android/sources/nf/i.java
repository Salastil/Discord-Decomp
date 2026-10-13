package nf;

import android.os.Parcel;

/* loaded from: classes3.dex */
public final class i extends com.google.android.gms.internal.play_billing.e {
    public final mf.a y(mf.b bVar, int i5, mf.b bVar2) {
        Parcel u5 = u();
        zf.g.b(u5, bVar);
        u5.writeString("com.google.android.gms.cronet_dynamite");
        u5.writeInt(i5);
        zf.g.b(u5, bVar2);
        Parcel t5 = t(2, u5);
        mf.a z5 = mf.b.z(t5.readStrongBinder());
        t5.recycle();
        return z5;
    }

    public final mf.a z(mf.b bVar, int i5, mf.b bVar2) {
        Parcel u5 = u();
        zf.g.b(u5, bVar);
        u5.writeString("com.google.android.gms.cronet_dynamite");
        u5.writeInt(i5);
        zf.g.b(u5, bVar2);
        Parcel t5 = t(3, u5);
        mf.a z5 = mf.b.z(t5.readStrongBinder());
        t5.recycle();
        return z5;
    }
}
