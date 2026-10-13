package sf;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class s extends cf.a {

    @NotNull
    public static final Parcelable.Creator<s> CREATOR = new c(17);

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        ys.l.J(ys.l.I(20293, dest), dest);
    }
}
