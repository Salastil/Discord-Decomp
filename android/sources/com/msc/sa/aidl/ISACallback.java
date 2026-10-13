package com.msc.sa.aidl;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import nt.a;

/* loaded from: classes3.dex */
public interface ISACallback extends IInterface {
    public static final String DESCRIPTOR = "com.msc.sa.aidl.ISACallback";

    public static abstract class Stub extends Binder implements ISACallback {
        static final int TRANSACTION_onReceiveAccessToken = 1;
        static final int TRANSACTION_onReceiveAuthCode = 4;
        static final int TRANSACTION_onReceiveChecklistValidation = 2;
        static final int TRANSACTION_onReceiveDisclaimerAgreement = 3;
        static final int TRANSACTION_onReceivePasswordConfirmation = 6;
        static final int TRANSACTION_onReceiveRLControlFMM = 7;
        static final int TRANSACTION_onReceiveRubinRequest = 8;
        static final int TRANSACTION_onReceiveSCloudAccessToken = 5;

        public static class Proxy implements ISACallback {
            private IBinder mRemote;

            public Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return ISACallback.DESCRIPTOR;
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveAccessToken(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(1, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveAuthCode(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(4, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveChecklistValidation(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(2, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveDisclaimerAgreement(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(3, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceivePasswordConfirmation(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(6, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveRLControlFMM(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(7, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveRubinRequest(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(8, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveSCloudAccessToken(int i5, boolean z5, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISACallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeInt(z5 ? 1 : 0);
                    a.b(obtain, bundle);
                    this.mRemote.transact(5, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, ISACallback.DESCRIPTOR);
        }

        public static ISACallback asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface queryLocalInterface = iBinder.queryLocalInterface(ISACallback.DESCRIPTOR);
            return (queryLocalInterface == null || !(queryLocalInterface instanceof ISACallback)) ? new Proxy(iBinder) : (ISACallback) queryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
            boolean z5;
            if (i5 >= 1 && i5 <= 16777215) {
                parcel.enforceInterface(ISACallback.DESCRIPTOR);
            }
            if (i5 == 1598968902) {
                parcel2.writeString(ISACallback.DESCRIPTOR);
                return true;
            }
            switch (i5) {
                case 1:
                    int readInt = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator = Bundle.CREATOR;
                    onReceiveAccessToken(readInt, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 2:
                    int readInt2 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator2 = Bundle.CREATOR;
                    onReceiveChecklistValidation(readInt2, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 3:
                    int readInt3 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator3 = Bundle.CREATOR;
                    onReceiveDisclaimerAgreement(readInt3, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 4:
                    int readInt4 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator4 = Bundle.CREATOR;
                    onReceiveAuthCode(readInt4, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 5:
                    int readInt5 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator5 = Bundle.CREATOR;
                    onReceiveSCloudAccessToken(readInt5, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 6:
                    int readInt6 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator6 = Bundle.CREATOR;
                    onReceivePasswordConfirmation(readInt6, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 7:
                    int readInt7 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator7 = Bundle.CREATOR;
                    onReceiveRLControlFMM(readInt7, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                case 8:
                    int readInt8 = parcel.readInt();
                    z5 = parcel.readInt() != 0;
                    Parcelable.Creator creator8 = Bundle.CREATOR;
                    onReceiveRubinRequest(readInt8, z5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    return true;
                default:
                    return super.onTransact(i5, parcel, parcel2, i6);
            }
        }
    }

    void onReceiveAccessToken(int i5, boolean z5, Bundle bundle);

    void onReceiveAuthCode(int i5, boolean z5, Bundle bundle);

    void onReceiveChecklistValidation(int i5, boolean z5, Bundle bundle);

    void onReceiveDisclaimerAgreement(int i5, boolean z5, Bundle bundle);

    void onReceivePasswordConfirmation(int i5, boolean z5, Bundle bundle);

    void onReceiveRLControlFMM(int i5, boolean z5, Bundle bundle);

    void onReceiveRubinRequest(int i5, boolean z5, Bundle bundle);

    void onReceiveSCloudAccessToken(int i5, boolean z5, Bundle bundle);
}
