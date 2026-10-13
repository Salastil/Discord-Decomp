package com.google.android.gms.fido.fido2.api.common;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import androidx.annotation.NonNull;
import bf.t;
import bg.k1;
import bg.l1;
import com.discord.chat.bridge.botuikit.a;
import gf.c;
import java.util.Arrays;
import java.util.List;
import k0.d;
import kf.b;
import rf.h0;
import rf.j0;
import rf.k;
import rf.t0;
import ys.l;

/* loaded from: classes3.dex */
public final class PublicKeyCredentialRequestOptions extends k {

    @NonNull
    public static final Parcelable.Creator<PublicKeyCredentialRequestOptions> CREATOR = new b(24);
    public final AuthenticationExtensions E;
    public final Long F;
    public final ResultReceiver G;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f5670d;

    /* renamed from: e, reason: collision with root package name */
    public final Double f5671e;

    /* renamed from: i, reason: collision with root package name */
    public final String f5672i;

    /* renamed from: v, reason: collision with root package name */
    public final List f5673v;

    /* renamed from: w, reason: collision with root package name */
    public final Integer f5674w;

    /* renamed from: x, reason: collision with root package name */
    public final h0 f5675x;

    /* renamed from: y, reason: collision with root package name */
    public final j0 f5676y;

    public static final class Builder {
        public byte[] a;

        /* renamed from: b, reason: collision with root package name */
        public Double f5677b;

        /* renamed from: c, reason: collision with root package name */
        public String f5678c;

        /* renamed from: d, reason: collision with root package name */
        public List f5679d;

        /* renamed from: e, reason: collision with root package name */
        public AuthenticationExtensions f5680e;
    }

    public PublicKeyCredentialRequestOptions(byte[] bArr, Double d6, String str, List list, Integer num, h0 h0Var, String str2, AuthenticationExtensions authenticationExtensions, Long l6, String str3, ResultReceiver resultReceiver) {
        this.G = resultReceiver;
        if (str3 != null) {
            l1 l1Var = k1.f2961b.a.f2951d;
            l1.a.G();
            throw null;
        }
        t.g(bArr);
        this.f5670d = bArr;
        this.f5671e = d6;
        t.g(str);
        this.f5672i = str;
        this.f5673v = list;
        this.f5674w = num;
        this.f5675x = h0Var;
        this.F = l6;
        if (str2 != null) {
            try {
                this.f5676y = j0.a(str2);
            } catch (t0 e9) {
                throw new IllegalArgumentException(e9);
            }
        } else {
            this.f5676y = null;
        }
        this.E = authenticationExtensions;
    }

    public final boolean equals(Object obj) {
        List list;
        if (!(obj instanceof PublicKeyCredentialRequestOptions)) {
            return false;
        }
        PublicKeyCredentialRequestOptions publicKeyCredentialRequestOptions = (PublicKeyCredentialRequestOptions) obj;
        List list2 = publicKeyCredentialRequestOptions.f5673v;
        return Arrays.equals(this.f5670d, publicKeyCredentialRequestOptions.f5670d) && t.j(this.f5671e, publicKeyCredentialRequestOptions.f5671e) && t.j(this.f5672i, publicKeyCredentialRequestOptions.f5672i) && (((list = this.f5673v) == null && list2 == null) || (list != null && list2 != null && list.containsAll(list2) && list2.containsAll(list))) && t.j(this.f5674w, publicKeyCredentialRequestOptions.f5674w) && t.j(this.f5675x, publicKeyCredentialRequestOptions.f5675x) && t.j(this.f5676y, publicKeyCredentialRequestOptions.f5676y) && t.j(this.E, publicKeyCredentialRequestOptions.E) && t.j(this.F, publicKeyCredentialRequestOptions.F);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(Arrays.hashCode(this.f5670d)), this.f5671e, this.f5672i, this.f5673v, this.f5674w, this.f5675x, this.f5676y, this.E, this.F});
    }

    public final String toString() {
        String b10 = c.b(this.f5670d);
        String valueOf = String.valueOf(this.f5673v);
        String valueOf2 = String.valueOf(this.f5675x);
        String valueOf3 = String.valueOf(this.f5676y);
        String valueOf4 = String.valueOf(this.E);
        StringBuilder m5 = a.m("PublicKeyCredentialRequestOptions{\n challenge=", b10, ", \n timeoutSeconds=");
        m5.append(this.f5671e);
        m5.append(", \n rpId='");
        e.A(m5, this.f5672i, "', \n allowList=", valueOf, ", \n requestId=");
        d.r(this.f5674w, ", \n tokenBinding=", valueOf2, ", \n userVerification=", m5);
        e.A(m5, valueOf3, ", \n authenticationExtensions=", valueOf4, ", \n longRequestId=");
        m5.append(this.F);
        m5.append("}");
        return m5.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.A(parcel, 2, this.f5670d);
        Double d6 = this.f5671e;
        if (d6 != null) {
            l.H(parcel, 3, 8);
            parcel.writeDouble(d6.doubleValue());
        }
        l.D(this.f5672i, parcel, 4);
        l.G(parcel, 5, this.f5673v);
        l.B(parcel, 6, this.f5674w);
        l.C(parcel, 7, this.f5675x, i5);
        j0 j0Var = this.f5676y;
        l.D(j0Var == null ? null : j0Var.f17320d, parcel, 8);
        l.C(parcel, 9, this.E, i5);
        Long l6 = this.F;
        if (l6 != null) {
            l.H(parcel, 10, 8);
            parcel.writeLong(l6.longValue());
        }
        l.C(parcel, 12, this.G, i5);
        l.J(I, parcel);
    }
}
