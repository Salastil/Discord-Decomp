package android.support.v4.media.session;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import android.support.v4.media.MediaDescriptionCompat;

/* loaded from: classes.dex */
public final class a implements Parcelable.Creator {
    public final /* synthetic */ int a;

    public /* synthetic */ a(int i5) {
        this.a = i5;
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(final Parcel parcel) {
        switch (this.a) {
            case 0:
                MediaSessionCompat$ResultReceiverWrapper mediaSessionCompat$ResultReceiverWrapper = new MediaSessionCompat$ResultReceiverWrapper();
                mediaSessionCompat$ResultReceiverWrapper.f711d = (ResultReceiver) ResultReceiver.CREATOR.createFromParcel(parcel);
                return mediaSessionCompat$ResultReceiverWrapper;
            case 1:
                return new Parcelable(parcel) { // from class: android.support.v4.media.session.MediaSessionCompat$QueueItem
                    public static final Parcelable.Creator<MediaSessionCompat$QueueItem> CREATOR = new a(1);

                    /* renamed from: d, reason: collision with root package name */
                    public final MediaDescriptionCompat f709d;

                    /* renamed from: e, reason: collision with root package name */
                    public final long f710e;

                    {
                        this.f709d = MediaDescriptionCompat.CREATOR.createFromParcel(parcel);
                        this.f710e = parcel.readLong();
                    }

                    @Override // android.os.Parcelable
                    public final int describeContents() {
                        return 0;
                    }

                    public final String toString() {
                        StringBuilder sb2 = new StringBuilder("MediaSession.QueueItem {Description=");
                        sb2.append(this.f709d);
                        sb2.append(", Id=");
                        return e.m(sb2, this.f710e, " }");
                    }

                    @Override // android.os.Parcelable
                    public final void writeToParcel(Parcel parcel2, int i5) {
                        this.f709d.writeToParcel(parcel2, i5);
                        parcel2.writeLong(this.f710e);
                    }
                };
            case 2:
                final Parcelable readParcelable = parcel.readParcelable(null);
                return new Parcelable(readParcelable) { // from class: android.support.v4.media.session.MediaSessionCompat$Token
                    public static final Parcelable.Creator<MediaSessionCompat$Token> CREATOR = new a(2);

                    /* renamed from: d, reason: collision with root package name */
                    public final Object f712d = new Object();

                    /* renamed from: e, reason: collision with root package name */
                    public final Object f713e;

                    {
                        this.f713e = readParcelable;
                    }

                    @Override // android.os.Parcelable
                    public final int describeContents() {
                        return 0;
                    }

                    public final boolean equals(Object obj) {
                        if (this == obj) {
                            return true;
                        }
                        if (!(obj instanceof MediaSessionCompat$Token)) {
                            return false;
                        }
                        Object obj2 = ((MediaSessionCompat$Token) obj).f713e;
                        Object obj3 = this.f713e;
                        if (obj3 == null) {
                            return obj2 == null;
                        }
                        if (obj2 == null) {
                            return false;
                        }
                        return obj3.equals(obj2);
                    }

                    public final int hashCode() {
                        Object obj = this.f713e;
                        if (obj == null) {
                            return 0;
                        }
                        return obj.hashCode();
                    }

                    @Override // android.os.Parcelable
                    public final void writeToParcel(Parcel parcel2, int i5) {
                        parcel2.writeParcelable((Parcelable) this.f713e, i5);
                    }
                };
            case 3:
                ParcelableVolumeInfo parcelableVolumeInfo = new ParcelableVolumeInfo();
                parcelableVolumeInfo.f714d = parcel.readInt();
                parcelableVolumeInfo.f716i = parcel.readInt();
                parcelableVolumeInfo.f717v = parcel.readInt();
                parcelableVolumeInfo.f718w = parcel.readInt();
                parcelableVolumeInfo.f715e = parcel.readInt();
                return parcelableVolumeInfo;
            default:
                return new PlaybackStateCompat(parcel);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new MediaSessionCompat$ResultReceiverWrapper[i5];
            case 1:
                return new MediaSessionCompat$QueueItem[i5];
            case 2:
                return new MediaSessionCompat$Token[i5];
            case 3:
                return new ParcelableVolumeInfo[i5];
            default:
                return new PlaybackStateCompat[i5];
        }
    }
}
