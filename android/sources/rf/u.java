package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bg.k1;
import bg.l1;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class u extends cf.a {

    @NonNull
    public static final Parcelable.Creator<u> CREATOR = new kf.b(21);
    public final String E;

    /* renamed from: d, reason: collision with root package name */
    public final String f17352d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17353e;

    /* renamed from: i, reason: collision with root package name */
    public final bg.w0 f17354i;

    /* renamed from: v, reason: collision with root package name */
    public final i f17355v;

    /* renamed from: w, reason: collision with root package name */
    public final h f17356w;

    /* renamed from: x, reason: collision with root package name */
    public final j f17357x;

    /* renamed from: y, reason: collision with root package name */
    public final f f17358y;

    public u(String str, String str2, byte[] bArr, i iVar, h hVar, j jVar, f fVar, String str3) {
        bg.w0 k = bArr == null ? null : bg.w0.k(bArr, bArr.length);
        boolean z5 = false;
        bf.t.a("Must provide a response object.", (iVar != null && hVar == null && jVar == null) || (iVar == null && hVar != null && jVar == null) || (iVar == null && hVar == null && jVar != null));
        if (jVar != null || (str != null && k != null)) {
            z5 = true;
        }
        bf.t.a("Must provide id and rawId if not an error response.", z5);
        this.f17352d = str;
        this.f17353e = str2;
        this.f17354i = k;
        this.f17355v = iVar;
        this.f17356w = hVar;
        this.f17357x = jVar;
        this.f17358y = fVar;
        this.E = str3;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof u)) {
            return false;
        }
        u uVar = (u) obj;
        return bf.t.j(this.f17352d, uVar.f17352d) && bf.t.j(this.f17353e, uVar.f17353e) && bf.t.j(this.f17354i, uVar.f17354i) && bf.t.j(this.f17355v, uVar.f17355v) && bf.t.j(this.f17356w, uVar.f17356w) && bf.t.j(this.f17357x, uVar.f17357x) && bf.t.j(this.f17358y, uVar.f17358y) && bf.t.j(this.E, uVar.E);
    }

    public final k h() {
        i iVar = this.f17355v;
        if (iVar != null) {
            return iVar;
        }
        h hVar = this.f17356w;
        if (hVar != null) {
            return hVar;
        }
        j jVar = this.f17357x;
        if (jVar != null) {
            return jVar;
        }
        throw new IllegalStateException("No response set.");
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17352d, this.f17353e, this.f17354i, this.f17356w, this.f17355v, this.f17357x, this.f17358y, this.E});
    }

    public final String toString() {
        bg.w0 w0Var = this.f17354i;
        String b10 = gf.c.b(w0Var == null ? null : w0Var.m());
        String valueOf = String.valueOf(this.f17355v);
        String valueOf2 = String.valueOf(this.f17356w);
        String valueOf3 = String.valueOf(this.f17357x);
        String valueOf4 = String.valueOf(this.f17358y);
        StringBuilder t5 = a3.e.t("PublicKeyCredential{\n id='", this.f17352d, "', \n type='", this.f17353e, "', \n rawId=");
        a3.e.A(t5, b10, ", \n registerResponse=", valueOf, ", \n signResponse=");
        a3.e.A(t5, valueOf2, ", \n errorResponse=", valueOf3, ", \n extensionsClientOutputs=");
        return com.discord.chat.bridge.botuikit.a.k(t5, valueOf4, ", \n authenticatorAttachment='", this.E, "'}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        l1 l1Var = k1.f2961b.a.f2951d;
        l1.a.G();
        throw null;
    }
}
