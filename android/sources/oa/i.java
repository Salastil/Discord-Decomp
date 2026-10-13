package oa;

import com.facebook.imagepipeline.image.ImageInfo;
import java.util.Map;

/* loaded from: classes3.dex */
public final class i implements ImageInfo {

    /* renamed from: d, reason: collision with root package name */
    public final int f15811d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15812e;

    /* renamed from: i, reason: collision with root package name */
    public final Map f15813i;

    public i(int i5, int i6, Map map) {
        this.f15811d = i5;
        this.f15812e = i6;
        this.f15813i = map;
    }

    @Override // com.facebook.imagepipeline.image.ImageInfo, w9.a
    public final Map getExtras() {
        return this.f15813i;
    }

    @Override // com.facebook.imagepipeline.image.ImageInfo
    public final int getHeight() {
        return this.f15812e;
    }

    @Override // com.facebook.imagepipeline.image.ImageInfo
    public final int getWidth() {
        return this.f15811d;
    }
}
