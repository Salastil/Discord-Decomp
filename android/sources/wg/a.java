package wg;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.View;
import androidx.annotation.NonNull;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import sf.c;

/* loaded from: classes3.dex */
public final class a extends View.BaseSavedState {

    @NonNull
    public static final Parcelable.Creator<a> CREATOR = new c(20);

    /* renamed from: d, reason: collision with root package name */
    public int f19825d;

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("MaterialCheckBox.SavedState{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append(" CheckedState=");
        int i5 = this.f19825d;
        return com.discord.chat.bridge.botuikit.a.j(sb2, i5 != 1 ? i5 != 2 ? "unchecked" : ReactProgressBarViewManager.PROP_INDETERMINATE : "checked", "}");
    }

    @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeValue(Integer.valueOf(this.f19825d));
    }
}
