package com.discord.socialsdk.rpc;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.discord.socialsdk.rpc.IDiscordRpcCallback;
import com.discord.socialsdk.rpc.IDiscordRpcConnection;

/* loaded from: classes.dex */
public interface IDiscordRpcService extends IInterface {
    public static final String DESCRIPTOR = "com.discord.socialsdk.rpc.IDiscordRpcService";

    public static class Default implements IDiscordRpcService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.discord.socialsdk.rpc.IDiscordRpcService
        public IDiscordRpcConnection connect(long j, String str, IDiscordRpcCallback iDiscordRpcCallback) {
            return null;
        }
    }

    public static abstract class Stub extends Binder implements IDiscordRpcService {
        static final int TRANSACTION_connect = 1;

        public static class Proxy implements IDiscordRpcService {
            private IBinder mRemote;

            public Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.discord.socialsdk.rpc.IDiscordRpcService
            public IDiscordRpcConnection connect(long j, String str, IDiscordRpcCallback iDiscordRpcCallback) {
                Parcel obtain = Parcel.obtain();
                Parcel obtain2 = Parcel.obtain();
                try {
                    obtain.writeInterfaceToken("com.discord.socialsdk.rpc.IDiscordRpcService");
                    obtain.writeLong(j);
                    obtain.writeString(str);
                    obtain.writeStrongInterface(iDiscordRpcCallback);
                    this.mRemote.transact(1, obtain, obtain2, 0);
                    obtain2.readException();
                    return IDiscordRpcConnection.Stub.asInterface(obtain2.readStrongBinder());
                } finally {
                    obtain2.recycle();
                    obtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return "com.discord.socialsdk.rpc.IDiscordRpcService";
            }
        }

        public Stub() {
            attachInterface(this, "com.discord.socialsdk.rpc.IDiscordRpcService");
        }

        public static IDiscordRpcService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface queryLocalInterface = iBinder.queryLocalInterface("com.discord.socialsdk.rpc.IDiscordRpcService");
            return (queryLocalInterface == null || !(queryLocalInterface instanceof IDiscordRpcService)) ? new Proxy(iBinder) : (IDiscordRpcService) queryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
            if (i5 >= 1 && i5 <= 16777215) {
                parcel.enforceInterface("com.discord.socialsdk.rpc.IDiscordRpcService");
            }
            if (i5 == 1598968902) {
                parcel2.writeString("com.discord.socialsdk.rpc.IDiscordRpcService");
                return true;
            }
            if (i5 != 1) {
                return super.onTransact(i5, parcel, parcel2, i6);
            }
            IDiscordRpcConnection connect = connect(parcel.readLong(), parcel.readString(), IDiscordRpcCallback.Stub.asInterface(parcel.readStrongBinder()));
            parcel2.writeNoException();
            parcel2.writeStrongInterface(connect);
            return true;
        }
    }

    IDiscordRpcConnection connect(long j, String str, IDiscordRpcCallback iDiscordRpcCallback);
}
