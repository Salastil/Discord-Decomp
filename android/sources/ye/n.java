package ye;

import android.os.Parcel;
import android.os.RemoteException;
import android.util.Log;
import bf.h0;
import bf.t;
import java.io.UnsupportedEncodingException;
import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class n extends ag.a implements h0 {

    /* renamed from: g, reason: collision with root package name */
    public final int f20931g;

    public n(byte[] bArr) {
        super("com.google.android.gms.common.internal.ICertData", 9);
        t.b(bArr.length == 25);
        this.f20931g = Arrays.hashCode(bArr);
    }

    public static byte[] A(String str) {
        try {
            return str.getBytes("ISO-8859-1");
        } catch (UnsupportedEncodingException e9) {
            throw new AssertionError(e9);
        }
    }

    public final boolean equals(Object obj) {
        if (obj instanceof h0) {
            try {
                h0 h0Var = (h0) obj;
                if (((n) h0Var).f20931g == this.f20931g) {
                    return Arrays.equals(z(), (byte[]) mf.b.A(new mf.b(((n) h0Var).z())));
                }
            } catch (RemoteException e9) {
                Log.e("GoogleCertificates", "Failed to get Google certificates from remote", e9);
                return false;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f20931g;
    }

    @Override // ag.a
    public final boolean y(int i5, Parcel parcel, Parcel parcel2) {
        if (i5 == 1) {
            mf.b bVar = new mf.b(z());
            parcel2.writeNoException();
            zf.g.b(parcel2, bVar);
            return true;
        }
        if (i5 != 2) {
            return false;
        }
        parcel2.writeNoException();
        parcel2.writeInt(this.f20931g);
        return true;
    }

    public abstract byte[] z();
}
