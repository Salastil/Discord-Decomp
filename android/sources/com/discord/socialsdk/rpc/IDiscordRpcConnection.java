package com.discord.socialsdk.rpc;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes.dex */
public interface IDiscordRpcConnection extends IInterface {
    public static final String DESCRIPTOR = "com.discord.socialsdk.rpc.IDiscordRpcConnection";

    public static class Default implements IDiscordRpcConnection {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.discord.socialsdk.rpc.IDiscordRpcConnection
        public void disconnect() {
        }

        @Override // com.discord.socialsdk.rpc.IDiscordRpcConnection
        public void sendFrame(String str) {
        }
    }

    public static abstract class Stub extends Binder implements IDiscordRpcConnection {
        static final int TRANSACTION_disconnect = 2;
        static final int TRANSACTION_sendFrame = 1;

        public static class Proxy implements IDiscordRpcConnection {
            private IBinder mRemote;

            public Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.discord.socialsdk.rpc.IDiscordRpcConnection
            public void disconnect() {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(IDiscordRpcConnection.DESCRIPTOR);
                    this.mRemote.transact(2, obtain, obtain2, 0);
                    obtain2.readException();
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IDiscordRpcConnection.DESCRIPTOR;
            }

            @Override // com.discord.socialsdk.rpc.IDiscordRpcConnection
            public void sendFrame(String str) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken(IDiscordRpcConnection.DESCRIPTOR);
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
            attachInterface(this, IDiscordRpcConnection.DESCRIPTOR);
        }

        public static IDiscordRpcConnection asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface queryLocalInterface = iBinder.queryLocalInterface(IDiscordRpcConnection.DESCRIPTOR);
            return (queryLocalInterface == null || !(queryLocalInterface instanceof IDiscordRpcConnection)) ? new Proxy(iBinder) : (IDiscordRpcConnection) queryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
            if (i5 >= 1 && i5 <= 16777215) {
                parcel.enforceInterface(IDiscordRpcConnection.DESCRIPTOR);
            }
            if (i5 == 1598968902) {
                parcel2.writeString(IDiscordRpcConnection.DESCRIPTOR);
                return true;
            }
            if (i5 == 1) {
                sendFrame(parcel.readString());
                parcel2.writeNoException();
            } else {
                if (i5 != 2) {
                    return super.onTransact(i5, parcel, parcel2, i6);
                }
                disconnect();
                parcel2.writeNoException();
            }
            return true;
        }
    }

    void disconnect();

    void sendFrame(String str);
}
