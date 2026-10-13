package j2;

/* loaded from: classes.dex */
public final class i {
    public double a;

    /* renamed from: b, reason: collision with root package name */
    public double f12396b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f12397c;

    /* renamed from: d, reason: collision with root package name */
    public double f12398d;

    /* renamed from: e, reason: collision with root package name */
    public double f12399e;

    /* renamed from: f, reason: collision with root package name */
    public double f12400f;

    /* renamed from: g, reason: collision with root package name */
    public double f12401g;

    /* renamed from: h, reason: collision with root package name */
    public double f12402h;

    /* renamed from: i, reason: collision with root package name */
    public double f12403i;
    public final f j;

    public i() {
        this.a = Math.sqrt(1500.0d);
        this.f12396b = 0.5d;
        this.f12397c = false;
        this.f12403i = Double.MAX_VALUE;
        this.j = new f();
    }

    public final void a(float f2) {
        if (f2 < 0.0f) {
            throw new IllegalArgumentException("Damping ratio must be non-negative");
        }
        this.f12396b = f2;
        this.f12397c = false;
    }

    public final void b(float f2) {
        if (f2 <= 0.0f) {
            throw new IllegalArgumentException("Spring stiffness constant must be positive.");
        }
        this.a = Math.sqrt(f2);
        this.f12397c = false;
    }

    public final f c(double d6, double d7, long j) {
        double sin;
        double cos;
        if (!this.f12397c) {
            if (this.f12403i == Double.MAX_VALUE) {
                throw new IllegalStateException("Error: Final position of the spring must be set before the animation starts");
            }
            double d8 = this.f12396b;
            if (d8 > 1.0d) {
                double d10 = this.a;
                this.f12400f = (Math.sqrt((d8 * d8) - 1.0d) * d10) + ((-d8) * d10);
                double d11 = this.f12396b;
                double d12 = this.a;
                this.f12401g = ((-d11) * d12) - (Math.sqrt((d11 * d11) - 1.0d) * d12);
            } else if (d8 >= 0.0d && d8 < 1.0d) {
                this.f12402h = Math.sqrt(1.0d - (d8 * d8)) * this.a;
            }
            this.f12397c = true;
        }
        double d13 = j / 1000.0d;
        double d14 = d6 - this.f12403i;
        double d15 = this.f12396b;
        if (d15 > 1.0d) {
            double d16 = this.f12401g;
            double d17 = ((d16 * d14) - d7) / (d16 - this.f12400f);
            double d18 = d14 - d17;
            sin = (Math.pow(2.718281828459045d, this.f12400f * d13) * d17) + (Math.pow(2.718281828459045d, d16 * d13) * d18);
            double d19 = this.f12401g;
            double pow = Math.pow(2.718281828459045d, d19 * d13) * d18 * d19;
            double d20 = this.f12400f;
            cos = (Math.pow(2.718281828459045d, d20 * d13) * d17 * d20) + pow;
        } else if (d15 == 1.0d) {
            double d21 = this.a;
            double d22 = (d21 * d14) + d7;
            double d23 = (d22 * d13) + d14;
            double pow2 = Math.pow(2.718281828459045d, (-d21) * d13) * d23;
            double pow3 = Math.pow(2.718281828459045d, (-this.a) * d13) * d23;
            double d24 = -this.a;
            cos = (Math.pow(2.718281828459045d, d24 * d13) * d22) + (pow3 * d24);
            sin = pow2;
        } else {
            double d25 = 1.0d / this.f12402h;
            double d26 = this.a;
            double d27 = ((d15 * d26 * d14) + d7) * d25;
            sin = ((Math.sin(this.f12402h * d13) * d27) + (Math.cos(this.f12402h * d13) * d14)) * Math.pow(2.718281828459045d, (-d15) * d26 * d13);
            double d28 = this.a;
            double d29 = this.f12396b;
            double d30 = (-d28) * sin * d29;
            double pow4 = Math.pow(2.718281828459045d, (-d29) * d28 * d13);
            double d31 = this.f12402h;
            double sin2 = Math.sin(d31 * d13) * (-d31) * d14;
            double d32 = this.f12402h;
            cos = (((Math.cos(d32 * d13) * d27 * d32) + sin2) * pow4) + d30;
        }
        float f2 = (float) (sin + this.f12403i);
        f fVar = this.j;
        fVar.a = f2;
        fVar.f12393b = (float) cos;
        return fVar;
    }

    public i(float f2) {
        this.a = Math.sqrt(1500.0d);
        this.f12396b = 0.5d;
        this.f12397c = false;
        this.j = new f();
        this.f12403i = f2;
    }
}
