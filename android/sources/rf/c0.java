package rf;

/* loaded from: classes3.dex */
public enum c0 implements a {
    /* JADX INFO: Fake field, exist only in values array */
    RS256(-257),
    /* JADX INFO: Fake field, exist only in values array */
    RS384(-258),
    /* JADX INFO: Fake field, exist only in values array */
    RS512(-259),
    /* JADX INFO: Fake field, exist only in values array */
    LEGACY_RS1(-262),
    /* JADX INFO: Fake field, exist only in values array */
    PS256(-37),
    /* JADX INFO: Fake field, exist only in values array */
    PS384(-38),
    /* JADX INFO: Fake field, exist only in values array */
    PS512(-39),
    RS1(-65535);


    /* renamed from: d, reason: collision with root package name */
    public final int f17288d;

    c0(int i5) {
        this.f17288d = i5;
    }

    @Override // rf.a
    public final int a() {
        return this.f17288d;
    }
}
