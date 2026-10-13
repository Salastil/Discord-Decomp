package com.google.android.gms.internal.play_billing;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes3.dex */
public abstract class e implements IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f5729f;

    /* renamed from: g, reason: collision with root package name */
    public final IBinder f5730g;

    /* renamed from: h, reason: collision with root package name */
    public final String f5731h;

    public /* synthetic */ e(IBinder iBinder, String str, int i5) {
        this.f5729f = i5;
        this.f5730g = iBinder;
        this.f5731h = str;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        switch (this.f5729f) {
        }
        return this.f5730g;
    }

    public Parcel b() {
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken(this.f5731h);
        return obtain;
    }

    public void k(int i5, Parcel parcel) {
        switch (this.f5729f) {
            case 1:
                try {
                    this.f5730g.transact(i5, parcel, null, 1);
                    return;
                } finally {
                }
            default:
                try {
                    this.f5730g.transact(i5, parcel, null, 1);
                    return;
                } finally {
                }
        }
    }

    public Parcel r() {
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken(this.f5731h);
        return obtain;
    }

    public void s(int i5, Parcel parcel) {
        Parcel obtain = Parcel.obtain();
        try {
            this.f5730g.transact(i5, parcel, obtain, 0);
            obtain.readException();
        } finally {
            parcel.recycle();
            obtain.recycle();
        }
    }

    public Parcel t(int i5, Parcel parcel) {
        Parcel obtain = Parcel.obtain();
        try {
            try {
                this.f5730g.transact(i5, parcel, obtain, 0);
                obtain.readException();
                return obtain;
            } catch (RuntimeException e9) {
                obtain.recycle();
                throw e9;
            }
        } finally {
            parcel.recycle();
        }
    }

    public Parcel u() {
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken(this.f5731h);
        return obtain;
    }

    public Parcel v() {
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken(this.f5731h);
        return obtain;
    }

    public Parcel w(int i5, Parcel parcel) {
        Parcel obtain = Parcel.obtain();
        try {
            try {
                this.f5730g.transact(i5, parcel, obtain, 0);
                obtain.readException();
                return obtain;
            } catch (RuntimeException e9) {
                obtain.recycle();
                throw e9;
            }
        } finally {
            parcel.recycle();
        }
    }

    public void x(int i5, Parcel parcel) {
        try {
            this.f5730g.transact(i5, parcel, null, 1);
        } finally {
            parcel.recycle();
        }
    }
}
