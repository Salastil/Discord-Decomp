package android.support.v4.media.session;

import a3.e;
import android.annotation.SuppressLint;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import java.util.ArrayList;

@SuppressLint({"BanParcelableUsage"})
/* loaded from: classes.dex */
public final class PlaybackStateCompat implements Parcelable {
    public static final Parcelable.Creator<PlaybackStateCompat> CREATOR = new a(4);
    public final long E;
    public final ArrayList F;
    public final long G;
    public final Bundle H;

    /* renamed from: d, reason: collision with root package name */
    public final int f719d;

    /* renamed from: e, reason: collision with root package name */
    public final long f720e;

    /* renamed from: i, reason: collision with root package name */
    public final long f721i;

    /* renamed from: v, reason: collision with root package name */
    public final float f722v;

    /* renamed from: w, reason: collision with root package name */
    public final long f723w;

    /* renamed from: x, reason: collision with root package name */
    public final int f724x;

    /* renamed from: y, reason: collision with root package name */
    public final CharSequence f725y;

    public static final class CustomAction implements Parcelable {
        public static final Parcelable.Creator<CustomAction> CREATOR = new c();

        /* renamed from: d, reason: collision with root package name */
        public final String f726d;

        /* renamed from: e, reason: collision with root package name */
        public final CharSequence f727e;

        /* renamed from: i, reason: collision with root package name */
        public final int f728i;

        /* renamed from: v, reason: collision with root package name */
        public final Bundle f729v;

        public CustomAction(Parcel parcel) {
            this.f726d = parcel.readString();
            this.f727e = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
            this.f728i = parcel.readInt();
            this.f729v = parcel.readBundle(b.class.getClassLoader());
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public final String toString() {
            return "Action:mName='" + ((Object) this.f727e) + ", mIcon=" + this.f728i + ", mExtras=" + this.f729v;
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i5) {
            parcel.writeString(this.f726d);
            TextUtils.writeToParcel(this.f727e, parcel, i5);
            parcel.writeInt(this.f728i);
            parcel.writeBundle(this.f729v);
        }
    }

    public PlaybackStateCompat(Parcel parcel) {
        this.f719d = parcel.readInt();
        this.f720e = parcel.readLong();
        this.f722v = parcel.readFloat();
        this.E = parcel.readLong();
        this.f721i = parcel.readLong();
        this.f723w = parcel.readLong();
        this.f725y = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.F = parcel.createTypedArrayList(CustomAction.CREATOR);
        this.G = parcel.readLong();
        this.H = parcel.readBundle(b.class.getClassLoader());
        this.f724x = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("PlaybackState {state=");
        sb2.append(this.f719d);
        sb2.append(", position=");
        sb2.append(this.f720e);
        sb2.append(", buffered position=");
        sb2.append(this.f721i);
        sb2.append(", speed=");
        sb2.append(this.f722v);
        sb2.append(", updated=");
        sb2.append(this.E);
        sb2.append(", actions=");
        sb2.append(this.f723w);
        sb2.append(", error code=");
        sb2.append(this.f724x);
        sb2.append(", error message=");
        sb2.append(this.f725y);
        sb2.append(", custom actions=");
        sb2.append(this.F);
        sb2.append(", active item id=");
        return e.m(sb2, this.G, "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f719d);
        parcel.writeLong(this.f720e);
        parcel.writeFloat(this.f722v);
        parcel.writeLong(this.E);
        parcel.writeLong(this.f721i);
        parcel.writeLong(this.f723w);
        TextUtils.writeToParcel(this.f725y, parcel, i5);
        parcel.writeTypedList(this.F);
        parcel.writeLong(this.G);
        parcel.writeBundle(this.H);
        parcel.writeInt(this.f724x);
    }
}
