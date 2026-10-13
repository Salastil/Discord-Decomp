package oa;

import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public abstract class a implements c {

    /* renamed from: i, reason: collision with root package name */
    public static final HashSet f15800i = new HashSet(Arrays.asList("encoded_size", "encoded_width", "encoded_height", "uri_source", "image_format", "bitmap_config", "is_rounded", "non_fatal_decode_error", "original_url", "modified_url", "image_color_space"));

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f15801d = new HashMap();

    /* renamed from: e, reason: collision with root package name */
    public i f15802e;

    @Override // w9.a
    public final void A(Object obj, String str) {
        Boolean bool = Boolean.FALSE;
        if (f15800i.contains("is_rounded")) {
            this.f15801d.put("is_rounded", bool);
        }
    }

    @Override // oa.c
    public k G() {
        return j.f15814d;
    }

    @Override // com.facebook.imagepipeline.image.ImageInfo, w9.a
    public final Map getExtras() {
        return this.f15801d;
    }

    @Override // oa.c
    public boolean h0() {
        return false;
    }

    @Override // w9.a
    public final void q(Map map) {
        if (map == null) {
            return;
        }
        Iterator it = f15800i.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            Object obj = map.get(str);
            if (obj != null) {
                this.f15801d.put(str, obj);
            }
        }
    }
}
