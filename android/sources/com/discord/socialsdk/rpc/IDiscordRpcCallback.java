package com.discord.socialsdk.rpc;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes.dex */
public interface IDiscordRpcCallback extends IInterface {
    public static final String DESCRIPTOR = "com.discord.socialsdk.rpc.IDiscordRpcCallback";

    public static class Default implements IDiscordRpcCallback {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.discord.socialsdk.rpc.IDiscordRpcCallback
        public void onClose(int i5, String str) {
        }

        @Override // com.discord.socialsdk.rpc.IDiscordRpcCallback
        public void onFrame(String str) {
        }
    }

    public static abstract class Stub extends Binder implements IDiscordRpcCallback {
        static final int TRANSACTION_onClose = 2;
        static final int TRANSACTION_onFrame = 1;

        public static class Proxy implements IDiscordRpcCallback {
            private IBinder mRemote;

            public Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IDiscordRpcCallback.DESCRIPTOR;
            }

            @Override // com.discord.socialsdk.rpc.IDiscordRpcCallback
            public void onClose(int i5, String str) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(IDiscordRpcCallback.DESCRIPTOR);
                    obtain.writeInt(i5);
                    obtain.writeString(str);
                    this.mRemote.transact(2, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            @Override // com.discord.socialsdk.rpc.IDiscordRpcCallback
            public void onFrame(String str) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(IDiscordRpcCallback.DESCRIPTOR);
                    obtain.writeString(str);
                    this.mRemote.transact(1, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IDiscordRpcCallback.DESCRIPTOR);
        }

        public static IDiscordRpcCallback asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface queryLocalInterface = iBinder.queryLocalInterface(IDiscordRpcCallback.DESCRIPTOR);
            return (queryLocalInterface == null || !(queryLocalInterface instanceof IDiscordRpcCallback)) ? new Proxy(iBinder) : (IDiscordRpcCallback) queryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
            if (i5 >= 1 && i5 <= 16777215) {
                parcel.enforceInterface(IDiscordRpcCallback.DESCRIPTOR);
            }
            if (i5 == 1598968902) {
                parcel2.writeString(IDiscordRpcCallback.DESCRIPTOR);
                return true;
            }
            if (i5 == 1) {
                onFrame(parcel.readString());
                parcel2.writeNoException();
            } else {
                if (i5 != 2) {
                    return super.onTransact(i5, parcel, parcel2, i6);
                }
                onClose(parcel.readInt(), parcel.readString());
                parcel2.writeNoException();
            }
            return true;
        }
    }

    void onClose(int i5, String str);

    void onFrame(String str);
}
