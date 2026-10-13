package androidx.lifecycle;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class Lifecycle {
    public ha.l a;

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    public static final class State {

        /* renamed from: d, reason: collision with root package name */
        public static final State f2137d;

        /* renamed from: e, reason: collision with root package name */
        public static final State f2138e;

        /* renamed from: i, reason: collision with root package name */
        public static final State f2139i;

        /* renamed from: v, reason: collision with root package name */
        public static final State f2140v;

        /* renamed from: w, reason: collision with root package name */
        public static final State f2141w;

        /* renamed from: x, reason: collision with root package name */
        public static final /* synthetic */ State[] f2142x;

        static {
            State state = new State("DESTROYED", 0);
            f2137d = state;
            State state2 = new State("INITIALIZED", 1);
            f2138e = state2;
            State state3 = new State("CREATED", 2);
            f2139i = state3;
            State state4 = new State("STARTED", 3);
            f2140v = state4;
            State state5 = new State("RESUMED", 4);
            f2141w = state5;
            State[] stateArr = {state, state2, state3, state4, state5};
            f2142x = stateArr;
            ki.b.p(stateArr);
        }

        public static State valueOf(String str) {
            return (State) Enum.valueOf(State.class, str);
        }

        public static State[] values() {
            return (State[]) f2142x.clone();
        }

        public final boolean a(State state) {
            Intrinsics.checkNotNullParameter(state, "state");
            return compareTo(state) >= 0;
        }
    }

    public abstract void a(u uVar);

    public abstract State b();

    public abstract void c(u uVar);
}
