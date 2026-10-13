package rf;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class q0 extends cf.a {
    public static final Parcelable.Creator<q0> CREATOR = new kf.b(19);

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f17346e = "WebAuthn PRF\u0000".getBytes(StandardCharsets.UTF_8);

    /* renamed from: d, reason: collision with root package name */
    public final byte[][] f17347d;

    public q0(byte[][] bArr) {
        bf.t.b(bArr != null);
        bf.t.b(1 == ((bArr.length & 1) ^ 1));
        int i5 = 0;
        while (i5 < bArr.length) {
            bf.t.b(i5 == 0 || bArr[i5] != null);
            int i6 = i5 + 1;
            bf.t.b(bArr[i6] != null);
            int length = bArr[i6].length;
            bf.t.b(length == 32 || length == 64);
            i5 += 2;
        }
        this.f17347d = bArr;
    }

    public static q0 h(JSONObject jSONObject, boolean z5) {
        ArrayList arrayList = new ArrayList();
        try {
            if (jSONObject.has("eval")) {
                arrayList.add(null);
                if (z5) {
                    arrayList.add(w(jSONObject.getJSONObject("eval")));
                } else {
                    arrayList.add(x(jSONObject.getJSONObject("eval")));
                }
            }
            if (jSONObject.has("evalByCredential")) {
                JSONObject jSONObject2 = jSONObject.getJSONObject("evalByCredential");
                Iterator<String> keys = jSONObject2.keys();
                while (keys.hasNext()) {
                    String next = keys.next();
                    arrayList.add(gf.c.a(next));
                    if (z5) {
                        arrayList.add(w(jSONObject2.getJSONObject(next)));
                    } else {
                        arrayList.add(x(jSONObject2.getJSONObject(next)));
                    }
                }
            }
            return new q0((byte[][]) arrayList.toArray(new byte[0][]));
        } catch (IllegalArgumentException unused) {
            throw new JSONException("invalid base64url value");
        }
    }

    public static JSONObject i(byte[] bArr) {
        JSONObject jSONObject = new JSONObject();
        if (bArr.length == 32) {
            jSONObject.put("first", Base64.encodeToString(bArr, 11));
            return jSONObject;
        }
        jSONObject.put("first", Base64.encodeToString(bArr, 0, 32, 11));
        jSONObject.put("second", Base64.encodeToString(bArr, 32, 32, 11));
        return jSONObject;
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0035  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static byte[] v(byte[] bArr) {
        a5.f fVar;
        bg.i0 i0Var;
        int i5 = bg.l0.a;
        bg.m0 m0Var = bg.k0.a;
        int i6 = m0Var.f2967x;
        MessageDigest messageDigest = m0Var.f2966w;
        try {
            if (m0Var.f2968y) {
                try {
                    fVar = new a5.f((MessageDigest) messageDigest.clone(), i6);
                } catch (CloneNotSupportedException unused) {
                }
                MessageDigest messageDigest2 = (MessageDigest) fVar.f154c;
                byte[] bArr2 = f17346e;
                bArr2.getClass();
                int length = bArr2.length;
                if (!fVar.a) {
                    throw new IllegalStateException("Cannot re-use a Hasher after calling hash() on it");
                }
                messageDigest2.update(bArr2, 0, length);
                bArr.getClass();
                int length2 = bArr.length;
                if (fVar.a) {
                    throw new IllegalStateException("Cannot re-use a Hasher after calling hash() on it");
                }
                messageDigest2.update(bArr, 0, length2);
                if (fVar.a) {
                    throw new IllegalStateException("Cannot re-use a Hasher after calling hash() on it");
                }
                fVar.a = true;
                int i10 = fVar.f153b;
                if (i10 == messageDigest2.getDigestLength()) {
                    byte[] digest = messageDigest2.digest();
                    char[] cArr = bg.j0.f2955d;
                    i0Var = new bg.i0(digest);
                } else {
                    byte[] copyOf = Arrays.copyOf(messageDigest2.digest(), i10);
                    char[] cArr2 = bg.j0.f2955d;
                    i0Var = new bg.i0(copyOf);
                }
                return (byte[]) i0Var.f2952e.clone();
            }
            fVar = new a5.f(MessageDigest.getInstance(messageDigest.getAlgorithm()), i6);
            MessageDigest messageDigest22 = (MessageDigest) fVar.f154c;
            byte[] bArr22 = f17346e;
            bArr22.getClass();
            int length3 = bArr22.length;
            if (!fVar.a) {
            }
        } catch (NoSuchAlgorithmException e9) {
            throw new AssertionError(e9);
        }
    }

    public static byte[] w(JSONObject jSONObject) {
        byte[] a = gf.c.a(jSONObject.getString("first"));
        if (a.length != 32) {
            throw new JSONException("hashed PRF value with wrong length");
        }
        if (!jSONObject.has("second")) {
            return a;
        }
        byte[] a10 = gf.c.a(jSONObject.getString("second"));
        if (a10.length == 32) {
            return bg.b.j(a, a10);
        }
        throw new JSONException("hashed PRF value with wrong length");
    }

    public static byte[] x(JSONObject jSONObject) {
        byte[] v5 = v(gf.c.a(jSONObject.getString("first")));
        return !jSONObject.has("second") ? v5 : bg.b.j(v5, v(gf.c.a(jSONObject.getString("second"))));
    }

    public final boolean equals(Object obj) {
        if (obj instanceof q0) {
            return Arrays.deepEquals(this.f17347d, ((q0) obj).f17347d);
        }
        return false;
    }

    public final int hashCode() {
        int i5 = 0;
        for (byte[] bArr : this.f17347d) {
            if (bArr != null) {
                i5 ^= Arrays.hashCode(new Object[]{bArr});
            }
        }
        return i5;
    }

    public final String toString() {
        byte[][] bArr = this.f17347d;
        try {
            JSONObject jSONObject = new JSONObject();
            JSONObject jSONObject2 = null;
            for (int i5 = 0; i5 < bArr.length; i5 += 2) {
                if (bArr[i5] == null) {
                    jSONObject.put("eval", i(bArr[i5 + 1]));
                } else {
                    if (jSONObject2 == null) {
                        jSONObject2 = new JSONObject();
                        jSONObject.put("evalByCredential", jSONObject2);
                    }
                    jSONObject2.put(gf.c.b(bArr[i5]), i(bArr[i5 + 1]));
                }
            }
            return "PrfExtension{" + jSONObject.toString() + "}";
        } catch (JSONException e9) {
            return s4.h.f("PrfExtension{Exception:", e9.getMessage(), "}");
        }
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        byte[][] bArr = this.f17347d;
        if (bArr != null) {
            int I2 = ys.l.I(1, parcel);
            parcel.writeInt(bArr.length);
            for (byte[] bArr2 : bArr) {
                parcel.writeByteArray(bArr2);
            }
            ys.l.J(I2, parcel);
        }
        ys.l.J(I, parcel);
    }
}
