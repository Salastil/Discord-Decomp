package th;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.discord.js_watchdog.SharedPreferencesKey;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class h extends ag.a implements uh.l {

    /* renamed from: g, reason: collision with root package name */
    public final jg.g f18461g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ m f18462h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(m mVar, jg.g gVar) {
        super("com.google.android.play.core.assetpacks.protocol.IAssetModuleServiceCallback", 6);
        this.f18462h = mVar;
        this.f18461g = gVar;
    }

    @Override // uh.l
    public void c(Bundle bundle, Bundle bundle2) {
        this.f18462h.f18507e.d(this.f18461g);
        m.f18502g.e("onKeepAlive(%b)", Boolean.valueOf(bundle.getBoolean("keep_alive")));
    }

    @Override // uh.l
    public void d(int i5, Bundle bundle) {
        this.f18462h.f18506d.d(this.f18461g);
        m.f18502g.e("onStartDownload(%d)", Integer.valueOf(i5));
    }

    @Override // uh.l
    public void e(List list) {
        this.f18462h.f18506d.d(this.f18461g);
        m.f18502g.e("onGetSessionStates", new Object[0]);
    }

    @Override // uh.l
    public void n(Bundle bundle) {
        uh.q qVar = this.f18462h.f18506d;
        jg.g gVar = this.f18461g;
        qVar.d(gVar);
        int i5 = bundle.getInt("error_code");
        m.f18502g.b("onError(%d)", Integer.valueOf(i5));
        gVar.c(new qh.a(i5, 1));
    }

    @Override // uh.l
    public void o(Bundle bundle, Bundle bundle2) {
        this.f18462h.f18506d.d(this.f18461g);
        m.f18502g.e("onGetChunkFileDescriptor", new Object[0]);
    }

    @Override // ag.a
    public final boolean r(int i5, Parcel parcel) {
        jg.g gVar = this.f18461g;
        m mVar = this.f18462h;
        switch (i5) {
            case 2:
                int readInt = parcel.readInt();
                Parcelable.Creator creator = Bundle.CREATOR;
                Bundle bundle = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                d(readInt, bundle);
                return true;
            case 3:
                int readInt2 = parcel.readInt();
                Parcelable.Creator creator2 = Bundle.CREATOR;
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onCancelDownload(%d)", Integer.valueOf(readInt2));
                return true;
            case 4:
                int readInt3 = parcel.readInt();
                Parcelable.Creator creator3 = Bundle.CREATOR;
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onGetSession(%d)", Integer.valueOf(readInt3));
                return true;
            case 5:
                ArrayList createTypedArrayList = parcel.createTypedArrayList(Bundle.CREATOR);
                uh.h.b(parcel);
                e(createTypedArrayList);
                return true;
            case 6:
                Parcelable.Creator creator4 = Bundle.CREATOR;
                Bundle bundle2 = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onNotifyChunkTransferred(%s, %s, %d, session=%d)", bundle2.getString("module_name"), bundle2.getString("slice_id"), Integer.valueOf(bundle2.getInt("chunk_number")), Integer.valueOf(bundle2.getInt(SharedPreferencesKey.SESSION_ID)));
                return true;
            case 7:
                Parcelable.Creator creator5 = Bundle.CREATOR;
                Bundle bundle3 = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                n(bundle3);
                return true;
            case 8:
                Parcelable.Creator creator6 = Bundle.CREATOR;
                Bundle bundle4 = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onNotifyModuleCompleted(%s, sessionId=%d)", bundle4.getString("module_name"), Integer.valueOf(bundle4.getInt(SharedPreferencesKey.SESSION_ID)));
                return true;
            case 9:
            default:
                return false;
            case 10:
                Parcelable.Creator creator7 = Bundle.CREATOR;
                Bundle bundle5 = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onNotifySessionFailed(%d)", Integer.valueOf(bundle5.getInt(SharedPreferencesKey.SESSION_ID)));
                return true;
            case 11:
                Parcelable.Creator creator8 = Bundle.CREATOR;
                Bundle bundle6 = (Bundle) uh.h.a(parcel);
                Bundle bundle7 = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                c(bundle6, bundle7);
                return true;
            case 12:
                Parcelable.Creator creator9 = Bundle.CREATOR;
                Bundle bundle8 = (Bundle) uh.h.a(parcel);
                Bundle bundle9 = (Bundle) uh.h.a(parcel);
                uh.h.b(parcel);
                o(bundle8, bundle9);
                return true;
            case 13:
                Parcelable.Creator creator10 = Bundle.CREATOR;
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onRequestDownloadInfo()", new Object[0]);
                return true;
            case 14:
                Parcelable.Creator creator11 = Bundle.CREATOR;
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onRemoveModule()", new Object[0]);
                return true;
            case 15:
                Parcelable.Creator creator12 = Bundle.CREATOR;
                uh.h.b(parcel);
                mVar.f18506d.d(gVar);
                m.f18502g.e("onCancelDownloads()", new Object[0]);
                return true;
        }
    }
}
