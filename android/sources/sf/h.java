package sf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class h extends cf.a {

    @NotNull
    public static final Parcelable.Creator<h> CREATOR = new c(5);

    /* renamed from: d, reason: collision with root package name */
    public final String f17995d;

    /* renamed from: e, reason: collision with root package name */
    public final Bundle f17996e;

    public h(String type, Bundle data) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(data, "data");
        this.f17995d = type;
        this.f17996e = data;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.D(this.f17995d, dest, 1);
        ys.l.z(dest, 2, this.f17996e);
        ys.l.J(I, dest);
    }
}
