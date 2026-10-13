package vg;

import com.google.android.material.carousel.CarouselLayoutManager;

/* loaded from: classes3.dex */
public final class d extends e {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CarouselLayoutManager f19413b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(CarouselLayoutManager carouselLayoutManager) {
        super(0);
        this.f19413b = carouselLayoutManager;
    }

    @Override // vg.e
    public final int a() {
        CarouselLayoutManager carouselLayoutManager = this.f19413b;
        return carouselLayoutManager.getHeight() - carouselLayoutManager.getPaddingBottom();
    }

    @Override // vg.e
    public final int b() {
        return 0;
    }

    @Override // vg.e
    public final int c() {
        return this.f19413b.getWidth();
    }

    @Override // vg.e
    public final int d() {
        CarouselLayoutManager carouselLayoutManager = this.f19413b;
        if (carouselLayoutManager.f()) {
            return carouselLayoutManager.getWidth();
        }
        return 0;
    }

    @Override // vg.e
    public final int e() {
        return this.f19413b.getPaddingTop();
    }
}
