package th;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class b extends uh.o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ArrayList f18397e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ HashMap f18398i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ jg.g f18399v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ m f18400w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(m mVar, jg.g gVar, ArrayList arrayList, HashMap hashMap, jg.g gVar2) {
        super(gVar);
        this.f18397e = arrayList;
        this.f18398i = hashMap;
        this.f18399v = gVar2;
        this.f18400w = mVar;
    }

    @Override // uh.o
    public final void a() {
        jg.g gVar = this.f18399v;
        m mVar = this.f18400w;
        ArrayList arrayList = this.f18397e;
        ArrayList l6 = m.l(arrayList);
        try {
            uh.k kVar = mVar.f18506d.f18930m;
            String str = mVar.a;
            Bundle k = m.k(this.f18398i);
            l lVar = new l(mVar, gVar, mVar.f18504b, mVar.f18505c);
            uh.i iVar = (uh.i) kVar;
            Parcel b10 = iVar.b();
            b10.writeString(str);
            b10.writeTypedList(l6);
            int i5 = uh.h.a;
            b10.writeInt(1);
            k.writeToParcel(b10, 0);
            b10.writeStrongBinder(lVar);
            iVar.k(2, b10);
        } catch (RemoteException e9) {
            m.f18502g.d(e9, "startDownload(%s)", arrayList);
            gVar.c(new RuntimeException(e9));
        }
    }
}
