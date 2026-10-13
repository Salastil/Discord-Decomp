package sf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class g extends cf.a {

    @NotNull
    public static final Parcelable.Creator<g> CREATOR = new c(4);

    /* renamed from: d, reason: collision with root package name */
    public final String f17989d;

    /* renamed from: e, reason: collision with root package name */
    public final Bundle f17990e;

    /* renamed from: i, reason: collision with root package name */
    public final Bundle f17991i;

    /* renamed from: v, reason: collision with root package name */
    public final String f17992v;

    /* renamed from: w, reason: collision with root package name */
    public final String f17993w;

    /* renamed from: x, reason: collision with root package name */
    public final ResultReceiver f17994x;

    public g(String type, Bundle credentialData, Bundle candidateQueryData, String str, String str2, ResultReceiver resultReceiver) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(credentialData, "credentialData");
        Intrinsics.checkNotNullParameter(candidateQueryData, "candidateQueryData");
        this.f17989d = type;
        this.f17990e = credentialData;
        this.f17991i = candidateQueryData;
        this.f17992v = str;
        this.f17993w = str2;
        this.f17994x = resultReceiver;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.D(this.f17989d, dest, 1);
        ys.l.z(dest, 2, this.f17990e);
        ys.l.z(dest, 3, this.f17991i);
        ys.l.D(this.f17992v, dest, 4);
        ys.l.D(this.f17993w, dest, 5);
        ys.l.C(dest, 6, this.f17994x, i5);
        ys.l.J(I, dest);
    }
}
