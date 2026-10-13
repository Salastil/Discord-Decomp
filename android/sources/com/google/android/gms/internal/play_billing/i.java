package com.google.android.gms.internal.play_billing;

import java.util.Arrays;

/* loaded from: classes3.dex */
public enum i {
    RESPONSE_CODE_UNSPECIFIED(-999),
    /* JADX INFO: Fake field, exist only in values array */
    SERVICE_TIMEOUT(-3),
    /* JADX INFO: Fake field, exist only in values array */
    FEATURE_NOT_SUPPORTED(-2),
    /* JADX INFO: Fake field, exist only in values array */
    SERVICE_DISCONNECTED(-1),
    /* JADX INFO: Fake field, exist only in values array */
    OK(0),
    /* JADX INFO: Fake field, exist only in values array */
    USER_CANCELED(1),
    /* JADX INFO: Fake field, exist only in values array */
    SERVICE_UNAVAILABLE(2),
    /* JADX INFO: Fake field, exist only in values array */
    BILLING_UNAVAILABLE(3),
    /* JADX INFO: Fake field, exist only in values array */
    ITEM_UNAVAILABLE(4),
    /* JADX INFO: Fake field, exist only in values array */
    DEVELOPER_ERROR(5),
    /* JADX INFO: Fake field, exist only in values array */
    ERROR(6),
    /* JADX INFO: Fake field, exist only in values array */
    ITEM_ALREADY_OWNED(7),
    /* JADX INFO: Fake field, exist only in values array */
    ITEM_NOT_OWNED(8),
    /* JADX INFO: Fake field, exist only in values array */
    EXPIRED_OFFER_TOKEN(11),
    /* JADX INFO: Fake field, exist only in values array */
    NETWORK_ERROR(12);


    /* renamed from: i, reason: collision with root package name */
    public static final c0 f5749i;

    /* renamed from: d, reason: collision with root package name */
    public final int f5751d;

    static {
        a1.d dVar = new a1.d(5, (byte) 0);
        dVar.f15i = new Object[8];
        dVar.f14e = 0;
        for (i iVar : values()) {
            Integer valueOf = Integer.valueOf(iVar.f5751d);
            int i5 = dVar.f14e + 1;
            Object[] objArr = (Object[]) dVar.f15i;
            int length = objArr.length;
            int i6 = i5 + i5;
            if (i6 > length) {
                dVar.f15i = Arrays.copyOf(objArr, a2.b(length, i6));
            }
            Object[] objArr2 = (Object[]) dVar.f15i;
            int i10 = dVar.f14e;
            int i11 = i10 + i10;
            objArr2[i11] = valueOf;
            objArr2[i11 + 1] = iVar;
            dVar.f14e = i10 + 1;
        }
        u uVar = (u) dVar.f16v;
        if (uVar != null) {
            throw uVar.a();
        }
        c0 a = c0.a(dVar.f14e, (Object[]) dVar.f15i, dVar);
        u uVar2 = (u) dVar.f16v;
        if (uVar2 != null) {
            throw uVar2.a();
        }
        f5749i = a;
    }

    i(int i5) {
        this.f5751d = i5;
    }
}
