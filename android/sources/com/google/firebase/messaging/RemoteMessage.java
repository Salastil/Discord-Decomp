package com.google.firebase.messaging;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class RemoteMessage extends cf.a {
    public static final Parcelable.Creator<RemoteMessage> CREATOR = new android.support.v4.media.a(23);

    /* renamed from: d, reason: collision with root package name */
    public final Bundle f6199d;

    /* renamed from: e, reason: collision with root package name */
    public s.e f6200e;

    public RemoteMessage(Bundle bundle) {
        this.f6199d = bundle;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.z(parcel, 2, this.f6199d);
        ys.l.J(I, parcel);
    }
}
