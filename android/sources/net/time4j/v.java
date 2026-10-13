package net.time4j;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class v implements Serializable {
    private static final long serialVersionUID = -4124961309622141228L;
    private final long days;
    private final z0 time;

    public v(long j, z0 z0Var) {
        this.days = j;
        this.time = z0Var;
    }

    public final long a() {
        return this.days;
    }

    public final z0 b() {
        return this.time;
    }
}
