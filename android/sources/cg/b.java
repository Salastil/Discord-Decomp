package cg;

import android.os.Parcelable;
import ye.d;
import ze.f;
import ze.g;

/* loaded from: classes3.dex */
public abstract class b {
    public static final d a;

    /* renamed from: b, reason: collision with root package name */
    public static final d f3493b;

    /* renamed from: c, reason: collision with root package name */
    public static final d f3494c;

    /* renamed from: d, reason: collision with root package name */
    public static final d[] f3495d;

    static {
        d dVar = new d("GET_CREDENTIAL", 1L);
        a = dVar;
        d dVar2 = new d("CREDENTIAL_REGISTRY", 1L);
        d dVar3 = new d("CLEAR_REGISTRY", 2L);
        d dVar4 = new d("CLEAR_CREATION_OPTIONS", 1L);
        d dVar5 = new d("CLEAR_CREDENTIAL_STATE", 1L);
        d dVar6 = new d("CREATE_CREDENTIAL", 3L);
        f3493b = dVar6;
        d dVar7 = new d("REGISTER_CREATION_OPTIONS", 1L);
        d dVar8 = new d("REGISTER_EXPORT", 1L);
        d dVar9 = new d("IMPORT_CREDENTIALS", 1L);
        d dVar10 = new d("SIGNAL_CREDENTIAL_STATE", 1L);
        f3494c = dVar10;
        f3495d = new d[]{dVar, dVar2, dVar3, dVar4, dVar5, dVar6, dVar7, dVar8, dVar9, dVar10, new d("CLEAR_EXPORT", 1L), new d("IMPORT_CREDENTIALS_FOR_DEVICE_SETUP", 3L), new d("EXPORT_CREDENTIALS_TO_DEVICE_SETUP", 3L), new d("GET_CREDENTIAL_TRANSFER_CAPABILITIES", 3L)};
    }

    public static f a() {
        g gVar = new g(-1, -1, 0, true);
        Parcelable.Creator<f> creator = f.CREATOR;
        f fVar = new f(gVar, false);
        fVar.f21201i = false;
        return fVar;
    }
}
