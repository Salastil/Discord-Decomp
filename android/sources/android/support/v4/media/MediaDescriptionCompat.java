package android.support.v4.media;

import android.annotation.SuppressLint;
import android.graphics.Bitmap;
import android.media.MediaDescription;
import android.net.Uri;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

@SuppressLint({"BanParcelableUsage"})
/* loaded from: classes.dex */
public final class MediaDescriptionCompat implements Parcelable {
    public static final Parcelable.Creator<MediaDescriptionCompat> CREATOR = new a(1);
    public final Uri E;
    public MediaDescription F;

    /* renamed from: d, reason: collision with root package name */
    public final String f699d;

    /* renamed from: e, reason: collision with root package name */
    public final CharSequence f700e;

    /* renamed from: i, reason: collision with root package name */
    public final CharSequence f701i;

    /* renamed from: v, reason: collision with root package name */
    public final CharSequence f702v;

    /* renamed from: w, reason: collision with root package name */
    public final Bitmap f703w;

    /* renamed from: x, reason: collision with root package name */
    public final Uri f704x;

    /* renamed from: y, reason: collision with root package name */
    public final Bundle f705y;

    public MediaDescriptionCompat(String str, CharSequence charSequence, CharSequence charSequence2, CharSequence charSequence3, Bitmap bitmap, Uri uri, Bundle bundle, Uri uri2) {
        this.f699d = str;
        this.f700e = charSequence;
        this.f701i = charSequence2;
        this.f702v = charSequence3;
        this.f703w = bitmap;
        this.f704x = uri;
        this.f705y = bundle;
        this.E = uri2;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        return ((Object) this.f700e) + ", " + ((Object) this.f701i) + ", " + ((Object) this.f702v);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        MediaDescription mediaDescription = this.F;
        if (mediaDescription == null) {
            MediaDescription.Builder b10 = b.b();
            b.n(b10, this.f699d);
            b.p(b10, this.f700e);
            b.o(b10, this.f701i);
            b.j(b10, this.f702v);
            b.l(b10, this.f703w);
            b.m(b10, this.f704x);
            b.k(b10, this.f705y);
            c.b(b10, this.E);
            mediaDescription = b.a(b10);
            this.F = mediaDescription;
        }
        mediaDescription.writeToParcel(parcel, i5);
    }
}
