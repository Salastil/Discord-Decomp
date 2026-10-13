package vr;

import com.discord.age_assurance.DigitalCredentialModule;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {

    /* renamed from: d, reason: collision with root package name */
    public static final i f19567d;

    /* renamed from: e, reason: collision with root package name */
    public static final i f19568e;

    /* renamed from: i, reason: collision with root package name */
    public static final i f19569i;

    /* renamed from: v, reason: collision with root package name */
    public static final i f19570v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ i[] f19571w;

    static {
        i iVar = new i("SUCCESSFUL", 0);
        f19567d = iVar;
        i iVar2 = new i("REREGISTER", 1);
        f19568e = iVar2;
        i iVar3 = new i(DigitalCredentialModule.CODE_CANCELLED, 2);
        f19569i = iVar3;
        i iVar4 = new i("ALREADY_SELECTED", 3);
        f19570v = iVar4;
        i[] iVarArr = {iVar, iVar2, iVar3, iVar4};
        f19571w = iVarArr;
        ki.b.p(iVarArr);
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f19571w.clone();
    }
}
