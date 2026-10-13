package vg;

import com.google.android.material.carousel.CarouselLayoutManager;

/* loaded from: classes3.dex */
public final class c extends e {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CarouselLayoutManager f19412b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(CarouselLayoutManager carouselLayoutManager) {
        super(1);
        this.f19412b = carouselLayoutManager;
    }

    @Override // vg.e
    public final int a() {
        return this.f19412b.getHeight();
    }

    @Override // vg.e
    public final int b() {
        return this.f19412b.getPaddingLeft();
    }

    @Override // vg.e
    public final int c() {
        CarouselLayoutManager carouselLayoutManager = this.f19412b;
        return carouselLayoutManager.getWidth() - carouselLayoutManager.getPaddingRight();
    }

    @Override // vg.e
    public final int d() {
        return 0;
    }

    @Override // vg.e
    public final int e() {
        return 0;
    }
}
