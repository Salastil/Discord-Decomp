package zb;

/* loaded from: classes3.dex */
public enum c implements ui.c {
    REASON_UNKNOWN(0),
    MESSAGE_TOO_OLD(1),
    CACHE_FULL(2),
    PAYLOAD_TOO_BIG(3),
    MAX_RETRIES_REACHED(4),
    INVALID_PAYLOD(5),
    SERVER_ERROR(6);


    /* renamed from: d, reason: collision with root package name */
    public final int f21144d;

    c(int i5) {
        this.f21144d = i5;
    }

    @Override // ui.c
    public final int a() {
        return this.f21144d;
    }
}
