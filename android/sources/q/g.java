package q;

import android.net.Uri;
import android.os.Binder;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Parcel;
import androidx.appcompat.widget.v0;
import com.discord.chrome_custom_tabs.TrackedCustomTab$callback$1;

/* loaded from: classes.dex */
public final class g extends Binder implements b.a {

    /* renamed from: f, reason: collision with root package name */
    public final Handler f16636f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ a f16637g;

    public g(TrackedCustomTab$callback$1 trackedCustomTab$callback$1) {
        this.f16637g = trackedCustomTab$callback$1;
        attachInterface(this, b.a.a);
        this.f16636f = new Handler(Looper.getMainLooper());
    }

    @Override // android.os.Binder
    public final boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
        String str = b.a.a;
        if (i5 >= 1 && i5 <= 16777215) {
            parcel.enforceInterface(str);
        }
        if (i5 == 1598968902) {
            parcel2.writeString(str);
            return true;
        }
        Handler handler = this.f16636f;
        a aVar = this.f16637g;
        switch (i5) {
            case 2:
                int readInt = parcel.readInt();
                Bundle bundle = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new v0(this, readInt, bundle, 2));
                    return true;
                }
                return true;
            case 3:
                String readString = parcel.readString();
                Bundle bundle2 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new c(this, readString, bundle2, 0));
                    return true;
                }
                return true;
            case 4:
                Bundle bundle3 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new d(this, bundle3, 0));
                }
                parcel2.writeNoException();
                return true;
            case 5:
                String readString2 = parcel.readString();
                Bundle bundle4 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new c(this, readString2, bundle4, 1));
                }
                parcel2.writeNoException();
                return true;
            case 6:
                int readInt2 = parcel.readInt();
                Uri uri = (Uri) ta.a.e(parcel, Uri.CREATOR);
                boolean z5 = parcel.readInt() != 0;
                Bundle bundle5 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new e(this, readInt2, uri, z5, bundle5));
                    return true;
                }
                return true;
            case 7:
                Bundle extraCallbackWithResult = aVar == null ? null : aVar.extraCallbackWithResult(parcel.readString(), (Bundle) ta.a.e(parcel, Bundle.CREATOR));
                parcel2.writeNoException();
                if (extraCallbackWithResult == null) {
                    parcel2.writeInt(0);
                    return true;
                }
                parcel2.writeInt(1);
                extraCallbackWithResult.writeToParcel(parcel2, 1);
                return true;
            case 8:
                int readInt3 = parcel.readInt();
                int readInt4 = parcel.readInt();
                Bundle bundle6 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new d4.c(this, readInt3, readInt4, bundle6));
                    return true;
                }
                return true;
            case 9:
                Bundle bundle7 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new b(this, bundle7, 1));
                    return true;
                }
                return true;
            case 10:
                int readInt5 = parcel.readInt();
                int readInt6 = parcel.readInt();
                int readInt7 = parcel.readInt();
                int readInt8 = parcel.readInt();
                int readInt9 = parcel.readInt();
                Bundle bundle8 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new f(this, readInt5, readInt6, readInt7, readInt8, readInt9, bundle8));
                    return true;
                }
                return true;
            case 11:
                Bundle bundle9 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new d(this, bundle9, 1));
                    return true;
                }
                return true;
            case 12:
                Bundle bundle10 = (Bundle) ta.a.e(parcel, Bundle.CREATOR);
                if (aVar != null) {
                    handler.post(new b(this, bundle10, 0));
                    return true;
                }
                return true;
            default:
                return super.onTransact(i5, parcel, parcel2, i6);
        }
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this;
    }
}
