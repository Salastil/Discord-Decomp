package com.msc.sa.aidl;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import com.msc.sa.aidl.ISACallback;
import ta.a;

/* loaded from: classes3.dex */
public interface ISAService extends IInterface {
    public static final String DESCRIPTOR = "com.msc.sa.aidl.ISAService";

    public static abstract class Stub extends Binder implements ISAService {
        static final int TRANSACTION_registerCallback = 1;
        static final int TRANSACTION_requestAccessToken = 3;
        static final int TRANSACTION_requestAuthCode = 6;
        static final int TRANSACTION_requestChecklistValidation = 4;
        static final int TRANSACTION_requestDisclaimerAgreement = 5;
        static final int TRANSACTION_requestPasswordConfirmation = 8;
        static final int TRANSACTION_requestRLControlFMM = 9;
        static final int TRANSACTION_requestRubinRequest = 10;
        static final int TRANSACTION_requestSCloudAccessToken = 7;
        static final int TRANSACTION_unregisterCallback = 2;

        public static class Proxy implements ISAService {
            private IBinder mRemote;

            public Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return ISAService.DESCRIPTOR;
            }

            @Override // com.msc.sa.aidl.ISAService
            public String registerCallback(String str, String str2, String str3, ISACallback iSACallback) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeString(str);
                    obtain.writeString(str2);
                    obtain.writeString(str3);
                    obtain.writeStrongInterface(iSACallback);
                    this.mRemote.transact(1, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readString();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestAccessToken(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(3, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestAuthCode(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(6, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestChecklistValidation(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(4, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestDisclaimerAgreement(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(5, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestPasswordConfirmation(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(8, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestRLControlFMM(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(9, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestRubinRequest(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(10, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean requestSCloudAccessToken(int i5, String str, Bundle bundle) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    a.b(obtain, bundle);
                    this.mRemote.transact(7, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.msc.sa.aidl.ISAService
            public boolean unregisterCallback(String str) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(ISAService.DESCRIPTOR);
                    obtain.writeString(str);
                    this.mRemote.transact(2, obtain, obtain2, 0);
                    obtain2.readException();
                    return obtain2.readInt() != 0;
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, ISAService.DESCRIPTOR);
        }

        public static ISAService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface queryLocalInterface = iBinder.queryLocalInterface(ISAService.DESCRIPTOR);
            return (queryLocalInterface == null || !(queryLocalInterface instanceof ISAService)) ? new Proxy(iBinder) : (ISAService) queryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
            if (i5 >= 1 && i5 <= 16777215) {
                parcel.enforceInterface(ISAService.DESCRIPTOR);
            }
            if (i5 == 1598968902) {
                parcel2.writeString(ISAService.DESCRIPTOR);
                return true;
            }
            switch (i5) {
                case 1:
                    String registerCallback = registerCallback(parcel.readString(), parcel.readString(), parcel.readString(), ISACallback.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    parcel2.writeString(registerCallback);
                    return true;
                case 2:
                    boolean unregisterCallback = unregisterCallback(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(unregisterCallback ? 1 : 0);
                    return true;
                case 3:
                    int readInt = parcel.readInt();
                    String readString = parcel.readString();
                    Parcelable.Creator creator = Bundle.CREATOR;
                    boolean requestAccessToken = requestAccessToken(readInt, readString, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestAccessToken ? 1 : 0);
                    return true;
                case 4:
                    int readInt2 = parcel.readInt();
                    String readString2 = parcel.readString();
                    Parcelable.Creator creator2 = Bundle.CREATOR;
                    boolean requestChecklistValidation = requestChecklistValidation(readInt2, readString2, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestChecklistValidation ? 1 : 0);
                    return true;
                case 5:
                    int readInt3 = parcel.readInt();
                    String readString3 = parcel.readString();
                    Parcelable.Creator creator3 = Bundle.CREATOR;
                    boolean requestDisclaimerAgreement = requestDisclaimerAgreement(readInt3, readString3, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestDisclaimerAgreement ? 1 : 0);
                    return true;
                case 6:
                    int readInt4 = parcel.readInt();
                    String readString4 = parcel.readString();
                    Parcelable.Creator creator4 = Bundle.CREATOR;
                    boolean requestAuthCode = requestAuthCode(readInt4, readString4, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestAuthCode ? 1 : 0);
                    return true;
                case 7:
                    int readInt5 = parcel.readInt();
                    String readString5 = parcel.readString();
                    Parcelable.Creator creator5 = Bundle.CREATOR;
                    boolean requestSCloudAccessToken = requestSCloudAccessToken(readInt5, readString5, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestSCloudAccessToken ? 1 : 0);
                    return true;
                case 8:
                    int readInt6 = parcel.readInt();
                    String readString6 = parcel.readString();
                    Parcelable.Creator creator6 = Bundle.CREATOR;
                    boolean requestPasswordConfirmation = requestPasswordConfirmation(readInt6, readString6, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestPasswordConfirmation ? 1 : 0);
                    return true;
                case 9:
                    int readInt7 = parcel.readInt();
                    String readString7 = parcel.readString();
                    Parcelable.Creator creator7 = Bundle.CREATOR;
                    boolean requestRLControlFMM = requestRLControlFMM(readInt7, readString7, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestRLControlFMM ? 1 : 0);
                    return true;
                case 10:
                    int readInt8 = parcel.readInt();
                    String readString8 = parcel.readString();
                    Parcelable.Creator creator8 = Bundle.CREATOR;
                    boolean requestRubinRequest = requestRubinRequest(readInt8, readString8, (Bundle) a.a(parcel));
                    parcel2.writeNoException();
                    parcel2.writeInt(requestRubinRequest ? 1 : 0);
                    return true;
                default:
                    return super.onTransact(i5, parcel, parcel2, i6);
            }
        }
    }

    String registerCallback(String str, String str2, String str3, ISACallback iSACallback);

    boolean requestAccessToken(int i5, String str, Bundle bundle);

    boolean requestAuthCode(int i5, String str, Bundle bundle);

    boolean requestChecklistValidation(int i5, String str, Bundle bundle);

    boolean requestDisclaimerAgreement(int i5, String str, Bundle bundle);

    boolean requestPasswordConfirmation(int i5, String str, Bundle bundle);

    boolean requestRLControlFMM(int i5, String str, Bundle bundle);

    boolean requestRubinRequest(int i5, String str, Bundle bundle);

    boolean requestSCloudAccessToken(int i5, String str, Bundle bundle);

    boolean unregisterCallback(String str);
}
