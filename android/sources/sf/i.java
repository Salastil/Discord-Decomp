package sf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class i extends cf.a {

    @NotNull
    public static final Parcelable.Creator<i> CREATOR = new c(6);

    /* renamed from: d, reason: collision with root package name */
    public final String f17997d;

    /* renamed from: e, reason: collision with root package name */
    public final Bundle f17998e;

    /* renamed from: i, reason: collision with root package name */
    public final Bundle f17999i;

    /* renamed from: v, reason: collision with root package name */
    public final String f18000v;

    /* renamed from: w, reason: collision with root package name */
    public final String f18001w;

    /* renamed from: x, reason: collision with root package name */
    public final String f18002x;

    public i(String type, Bundle credentialRetrievalData, Bundle candidateQueryData, String requestMatcher, String requestType, String protocolType) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(credentialRetrievalData, "credentialRetrievalData");
        Intrinsics.checkNotNullParameter(candidateQueryData, "candidateQueryData");
        Intrinsics.checkNotNullParameter(requestMatcher, "requestMatcher");
        Intrinsics.checkNotNullParameter(requestType, "requestType");
        Intrinsics.checkNotNullParameter(protocolType, "protocolType");
        this.f17997d = type;
        this.f17998e = credentialRetrievalData;
        this.f17999i = candidateQueryData;
        this.f18000v = requestMatcher;
        this.f18001w = requestType;
        this.f18002x = protocolType;
        boolean z5 = (StringsKt.K(requestType) || StringsKt.K(protocolType)) ? false : true;
        boolean z6 = !StringsKt.K(type) && requestType.length() == 0 && protocolType.length() == 0;
        if (z5 || z6) {
            return;
        }
        StringBuilder sb2 = new StringBuilder(String.valueOf(protocolType).length() + String.valueOf(type).length() + 31 + String.valueOf(requestType).length() + 19 + 69);
        a3.e.A(sb2, "Either type: ", type, ", or requestType: ", requestType);
        throw new IllegalArgumentException(a3.e.n(sb2, " and protocolType: ", protocolType, " must be specified, but at least one contains an invalid blank value."));
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.D(this.f17997d, dest, 1);
        ys.l.z(dest, 2, this.f17998e);
        ys.l.z(dest, 3, this.f17999i);
        ys.l.D(this.f18000v, dest, 4);
        ys.l.D(this.f18001w, dest, 5);
        ys.l.D(this.f18002x, dest, 6);
        ys.l.J(I, dest);
    }
}
