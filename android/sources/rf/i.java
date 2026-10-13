package rf;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;
import androidx.annotation.NonNull;
import bg.b1;
import bg.c1;
import bg.d1;
import bg.e1;
import bg.f1;
import bg.g1;
import bg.h1;
import bg.j1;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.Arrays;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class i extends k {

    @NonNull
    public static final Parcelable.Creator<i> CREATOR = new s0(13);

    /* renamed from: d, reason: collision with root package name */
    public final bg.w0 f17311d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17312e;

    /* renamed from: i, reason: collision with root package name */
    public final bg.w0 f17313i;

    /* renamed from: v, reason: collision with root package name */
    public final String[] f17314v;

    public i(byte[] bArr, byte[] bArr2, byte[] bArr3, String[] strArr) {
        bf.t.g(bArr);
        bg.w0 k = bg.w0.k(bArr, bArr.length);
        bf.t.g(bArr2);
        bg.w0 k5 = bg.w0.k(bArr2, bArr2.length);
        bf.t.g(bArr3);
        bg.w0 k7 = bg.w0.k(bArr3, bArr3.length);
        this.f17311d = k;
        this.f17312e = k5;
        this.f17313i = k7;
        bf.t.g(strArr);
        this.f17314v = strArr;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return bf.t.j(this.f17311d, iVar.f17311d) && bf.t.j(this.f17312e, iVar.f17312e) && bf.t.j(this.f17313i, iVar.f17313i);
    }

    /* JADX WARN: Removed duplicated region for block: B:55:0x0215 A[Catch: JSONException -> 0x0021, TRY_LEAVE, TryCatch #2 {JSONException -> 0x0021, blocks: (B:3:0x000a, B:5:0x0013, B:8:0x0028, B:9:0x0035, B:10:0x003c, B:12:0x003f, B:14:0x0049, B:16:0x0054, B:17:0x004f, B:20:0x0057, B:22:0x0060, B:24:0x006a, B:26:0x007b, B:27:0x0083, B:29:0x0091, B:31:0x00a3, B:33:0x00c1, B:35:0x00d0, B:36:0x00d9, B:40:0x00e6, B:41:0x00e9, B:42:0x00ef, B:47:0x0111, B:53:0x0201, B:55:0x0215, B:58:0x0134, B:60:0x0145, B:65:0x015b, B:68:0x0177, B:70:0x018c, B:72:0x0191, B:73:0x01ac, B:74:0x01b1, B:75:0x01b2, B:76:0x01b9, B:81:0x01c6, B:83:0x01d3, B:85:0x01e0, B:86:0x01f5, B:87:0x01fa, B:88:0x01fb, B:89:0x0200, B:91:0x0222, B:92:0x0227, B:95:0x0228, B:96:0x022f, B:97:0x0230, B:98:0x0236, B:104:0x0238, B:105:0x023b, B:108:0x00d3, B:110:0x023f, B:111:0x0246, B:113:0x0249, B:114:0x0250, B:116:0x0251, B:117:0x0258, B:118:0x025b, B:119:0x0262, B:121:0x0263, B:122:0x026a, B:126:0x026e, B:127:0x0275), top: B:2:0x000a, inners: #4, #5, #9 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final JSONObject h() {
        byte[] bArr;
        String[] strArr = this.f17314v;
        try {
            JSONObject jSONObject = new JSONObject();
            bg.w0 w0Var = this.f17312e;
            if (w0Var != null) {
                jSONObject.put("clientDataJSON", gf.c.b(w0Var.m()));
            }
            bg.w0 w0Var2 = this.f17313i;
            if (w0Var2 != null) {
                jSONObject.put("attestationObject", gf.c.b(w0Var2.m()));
            }
            JSONArray jSONArray = new JSONArray();
            for (int i5 = 0; i5 < strArr.length; i5++) {
                if (strArr[i5].equals("cable")) {
                    jSONArray.put(i5, "hybrid");
                } else {
                    jSONArray.put(i5, strArr[i5]);
                }
            }
            jSONObject.put("transports", jSONArray);
            try {
                try {
                    h1 h1Var = (h1) ((e1) h1.e(w0Var2.m()).c(e1.class)).f2947e.get(new f1("authData"));
                    if (h1Var == null) {
                        throw new IllegalArgumentException("attestation object missing authData");
                    }
                    bg.w0 w0Var3 = ((b1) h1Var.c(b1.class)).f2936d;
                    byte[] bArr2 = w0Var3.f3005e;
                    ByteBuffer asReadOnlyBuffer = ByteBuffer.wrap(bArr2, 0, w0Var3.e()).asReadOnlyBuffer();
                    try {
                        asReadOnlyBuffer.position(asReadOnlyBuffer.position() + 32);
                        if ((asReadOnlyBuffer.get() & 64) == 0) {
                            throw new IllegalArgumentException("authData does not include credential data");
                        }
                        asReadOnlyBuffer.position(asReadOnlyBuffer.position() + 4);
                        asReadOnlyBuffer.position(asReadOnlyBuffer.position() + 16);
                        asReadOnlyBuffer.position(asReadOnlyBuffer.position() + asReadOnlyBuffer.getShort());
                        try {
                            try {
                                int position = asReadOnlyBuffer.position();
                                int j = bg.w0.j(position, bArr2.length, w0Var3.e());
                                j1 j1Var = new j1((j == 0 ? bg.w0.f3003i : new bg.v0(bArr2, position, j)).i());
                                try {
                                    bg.v vVar = ((e1) bg.b.k(j1Var).c(e1.class)).f2947e;
                                    h1 h1Var2 = (h1) vVar.get(new d1(3L));
                                    h1 h1Var3 = (h1) vVar.get(new d1(1L));
                                    if (h1Var2 == null || h1Var3 == null) {
                                        throw new IllegalArgumentException("COSE key missing required fields");
                                    }
                                    try {
                                        long j5 = ((d1) h1Var2.c(d1.class)).f2944d;
                                        long j7 = ((d1) h1Var3.c(d1.class)).f2944d;
                                        byte[] bArr3 = null;
                                        if (j7 != 1) {
                                            if (j7 == 2) {
                                                j7 = 2;
                                            }
                                            bArr = bArr3;
                                            jSONObject.put("authenticatorData", gf.c.b(w0Var3.m()));
                                            jSONObject.put("publicKeyAlgorithm", j5);
                                            if (bArr != null) {
                                                jSONObject.put("publicKey", Base64.encodeToString(bArr, 11));
                                            }
                                            return jSONObject;
                                        }
                                        h1 h1Var4 = (h1) vVar.get(new d1(-1L));
                                        if (h1Var4 == null) {
                                            throw new IllegalArgumentException("COSE key missing required fields");
                                        }
                                        long j10 = ((d1) h1Var4.c(d1.class)).f2944d;
                                        if (j7 == 2 && j10 == 1) {
                                            h1 h1Var5 = (h1) vVar.get(new d1(-2L));
                                            h1 h1Var6 = (h1) vVar.get(new d1(-3L));
                                            if (h1Var5 == null || h1Var6 == null) {
                                                throw new IllegalArgumentException("COSE key missing required fields");
                                            }
                                            bg.w0 w0Var4 = ((b1) h1Var5.c(b1.class)).f2936d;
                                            bg.w0 w0Var5 = ((b1) h1Var6.c(b1.class)).f2936d;
                                            if (w0Var4.f3005e.length != 32 || w0Var5.f3005e.length != 32) {
                                                throw new IllegalArgumentException("COSE coordinates are the wrong size");
                                            }
                                            bArr3 = bg.b.j(Base64.decode("MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAE", 0), w0Var4.m(), w0Var5.m());
                                        } else if (j7 == 1 && j10 == 6) {
                                            h1 h1Var7 = (h1) vVar.get(new d1(-2L));
                                            if (h1Var7 == null) {
                                                throw new IllegalArgumentException("COSE key missing required fields");
                                            }
                                            bg.w0 w0Var6 = ((b1) h1Var7.c(b1.class)).f2936d;
                                            if (w0Var6.f3005e.length != 32) {
                                                throw new IllegalArgumentException("COSE coordinates are the wrong size");
                                            }
                                            bArr3 = bg.b.j(Base64.decode("MCowBQYDK2VwAyEA", 0), w0Var6.m());
                                        }
                                        bArr = bArr3;
                                        jSONObject.put("authenticatorData", gf.c.b(w0Var3.m()));
                                        jSONObject.put("publicKeyAlgorithm", j5);
                                        if (bArr != null) {
                                        }
                                        return jSONObject;
                                    } catch (g1 e9) {
                                        throw new IllegalArgumentException("COSE key ill-formed", e9);
                                    }
                                } finally {
                                    try {
                                        j1Var.close();
                                    } catch (IOException unused) {
                                    }
                                }
                            } catch (g1 e10) {
                                e = e10;
                                throw new IllegalArgumentException("failed to parse COSE key", e);
                            }
                        } catch (c1 e11) {
                            e = e11;
                            throw new IllegalArgumentException("failed to parse COSE key", e);
                        }
                    } catch (IllegalArgumentException e12) {
                        throw new IllegalArgumentException("ill-formed authenticator data", e12);
                    }
                } catch (g1 e13) {
                    throw new IllegalArgumentException("authData value has wrong type", e13);
                }
            } catch (c1 e14) {
                e = e14;
                throw new IllegalArgumentException("failed to parse attestation object", e);
            } catch (g1 e15) {
                e = e15;
                throw new IllegalArgumentException("failed to parse attestation object", e);
            }
        } catch (JSONException e16) {
            throw new RuntimeException("Error encoding AuthenticatorAttestationResponse to JSON object", e16);
        }
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(Arrays.hashCode(new Object[]{this.f17311d})), Integer.valueOf(Arrays.hashCode(new Object[]{this.f17312e})), Integer.valueOf(Arrays.hashCode(new Object[]{this.f17313i}))});
    }

    public final String toString() {
        e4.m mVar = new e4.m(getClass().getSimpleName(), 9);
        bg.o0 o0Var = bg.q0.f2985d;
        byte[] m5 = this.f17311d.m();
        mVar.k0("keyHandle", o0Var.c(m5, m5.length));
        byte[] m6 = this.f17312e.m();
        mVar.k0("clientDataJSON", o0Var.c(m6, m6.length));
        byte[] m7 = this.f17313i.m();
        mVar.k0("attestationObject", o0Var.c(m7, m7.length));
        mVar.k0("transports", Arrays.toString(this.f17314v));
        return mVar.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.A(parcel, 2, this.f17311d.m());
        ys.l.A(parcel, 3, this.f17312e.m());
        ys.l.A(parcel, 4, this.f17313i.m());
        String[] strArr = this.f17314v;
        if (strArr != null) {
            int I2 = ys.l.I(5, parcel);
            parcel.writeStringArray(strArr);
            ys.l.J(I2, parcel);
        }
        ys.l.J(I, parcel);
    }
}
