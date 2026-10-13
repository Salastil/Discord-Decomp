package v3;

import com.discord.age_assurance.DigitalCredentialModule;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class y {

    /* renamed from: d, reason: collision with root package name */
    public static final y f19224d;

    /* renamed from: e, reason: collision with root package name */
    public static final y f19225e;

    /* renamed from: i, reason: collision with root package name */
    public static final y f19226i;

    /* renamed from: v, reason: collision with root package name */
    public static final y f19227v;

    /* renamed from: w, reason: collision with root package name */
    public static final y f19228w;

    /* renamed from: x, reason: collision with root package name */
    public static final y f19229x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ y[] f19230y;

    static {
        y yVar = new y("ENQUEUED", 0);
        f19224d = yVar;
        y yVar2 = new y("RUNNING", 1);
        f19225e = yVar2;
        y yVar3 = new y("SUCCEEDED", 2);
        f19226i = yVar3;
        y yVar4 = new y(DigitalCredentialModule.CODE_FAILED, 3);
        f19227v = yVar4;
        y yVar5 = new y("BLOCKED", 4);
        f19228w = yVar5;
        y yVar6 = new y(DigitalCredentialModule.CODE_CANCELLED, 5);
        f19229x = yVar6;
        f19230y = new y[]{yVar, yVar2, yVar3, yVar4, yVar5, yVar6};
    }

    public static y valueOf(String str) {
        return (y) Enum.valueOf(y.class, str);
    }

    public static y[] values() {
        return (y[]) f19230y.clone();
    }

    public final boolean a() {
        return this == f19226i || this == f19227v || this == f19229x;
    }
}
