package com.google.android.gms.internal.play_billing;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class b extends e implements d {
    public final Bundle A(String str, String str2, Bundle bundle) {
        Parcel v5 = v();
        v5.writeInt(9);
        v5.writeString(str);
        v5.writeString(str2);
        int i5 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        Parcel w5 = w(12, v5);
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle2 = (Bundle) f.a(w5);
        w5.recycle();
        return bundle2;
    }

    public final Bundle B(String str, String str2, String str3) {
        Parcel v5 = v();
        v5.writeInt(3);
        v5.writeString(str);
        v5.writeString(str2);
        v5.writeString(str3);
        v5.writeString(null);
        Parcel w5 = w(3, v5);
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle = (Bundle) f.a(w5);
        w5.recycle();
        return bundle;
    }

    public final Bundle C(int i5, String str, String str2, String str3, Bundle bundle) {
        Parcel v5 = v();
        v5.writeInt(i5);
        v5.writeString(str);
        v5.writeString(str2);
        v5.writeString(str3);
        v5.writeString(null);
        int i6 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        Parcel w5 = w(8, v5);
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle2 = (Bundle) f.a(w5);
        w5.recycle();
        return bundle2;
    }

    public final Bundle D(String str, String str2, String str3) {
        Parcel v5 = v();
        v5.writeInt(3);
        v5.writeString(str);
        v5.writeString(str2);
        v5.writeString(str3);
        Parcel w5 = w(4, v5);
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle = (Bundle) f.a(w5);
        w5.recycle();
        return bundle;
    }

    public final Bundle E(int i5, String str, String str2, String str3, Bundle bundle) {
        Parcel v5 = v();
        v5.writeInt(i5);
        v5.writeString(str);
        v5.writeString(str2);
        v5.writeString(str3);
        int i6 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        Parcel w5 = w(11, v5);
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle2 = (Bundle) f.a(w5);
        w5.recycle();
        return bundle2;
    }

    public final Bundle F(int i5, String str, String str2, Bundle bundle, Bundle bundle2) {
        Parcel v5 = v();
        v5.writeInt(i5);
        v5.writeString(str);
        v5.writeString(str2);
        int i6 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        v5.writeInt(1);
        bundle2.writeToParcel(v5, 0);
        Parcel w5 = w(901, v5);
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle3 = (Bundle) f.a(w5);
        w5.recycle();
        return bundle3;
    }

    public final void G(String str, Bundle bundle, a5.w wVar) {
        Parcel v5 = v();
        v5.writeInt(18);
        v5.writeString(str);
        int i5 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        v5.writeStrongBinder(wVar);
        Parcel obtain = Parcel.obtain();
        try {
            this.f5730g.transact(1301, v5, obtain, 0);
            obtain.readException();
        } finally {
            v5.recycle();
            obtain.recycle();
        }
    }

    public final void H(String str, Bundle bundle, a5.x xVar) {
        Parcel v5 = v();
        v5.writeInt(25);
        v5.writeString(str);
        int i5 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        v5.writeStrongBinder(xVar);
        x(2101, v5);
    }

    public final int y(int i5, String str, String str2) {
        Parcel v5 = v();
        v5.writeInt(i5);
        v5.writeString(str);
        v5.writeString(str2);
        Parcel w5 = w(1, v5);
        int readInt = w5.readInt();
        w5.recycle();
        return readInt;
    }

    public final int z(int i5, String str, String str2, Bundle bundle) {
        Parcel v5 = v();
        v5.writeInt(i5);
        v5.writeString(str);
        v5.writeString(str2);
        int i6 = f.a;
        v5.writeInt(1);
        bundle.writeToParcel(v5, 0);
        Parcel w5 = w(10, v5);
        int readInt = w5.readInt();
        w5.recycle();
        return readInt;
    }
}
