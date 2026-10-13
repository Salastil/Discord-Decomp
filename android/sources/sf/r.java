package sf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class r extends cf.a {

    @NotNull
    public static final Parcelable.Creator<r> CREATOR = new c(16);

    /* renamed from: d, reason: collision with root package name */
    public final String f18008d;

    /* renamed from: e, reason: collision with root package name */
    public final String f18009e;

    /* renamed from: i, reason: collision with root package name */
    public final Bundle f18010i;

    public r(String type, String str, Bundle requestData) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(requestData, "requestData");
        this.f18008d = type;
        this.f18009e = str;
        this.f18010i = requestData;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.D(this.f18008d, dest, 1);
        ys.l.D(this.f18009e, dest, 2);
        ys.l.z(dest, 3, this.f18010i);
        ys.l.J(I, dest);
    }
}
