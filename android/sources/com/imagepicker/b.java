package com.imagepicker;

import android.text.TextUtils;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.ViewProps;

/* loaded from: classes3.dex */
public final class b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Boolean f6486b;

    /* renamed from: c, reason: collision with root package name */
    public final Boolean f6487c;

    /* renamed from: d, reason: collision with root package name */
    public final int f6488d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6489e;

    /* renamed from: f, reason: collision with root package name */
    public final int f6490f;

    /* renamed from: g, reason: collision with root package name */
    public final int f6491g;

    /* renamed from: h, reason: collision with root package name */
    public final Boolean f6492h;

    /* renamed from: i, reason: collision with root package name */
    public final int f6493i;
    public final Boolean j;
    public final Boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final String f6494l;

    public b(ReadableMap readableMap) {
        this.f6488d = 1;
        Boolean bool = Boolean.FALSE;
        this.j = bool;
        this.k = bool;
        this.f6494l = readableMap.getString("mediaType");
        this.a = readableMap.getInt("selectionLimit");
        this.f6486b = Boolean.valueOf(readableMap.getBoolean("includeBase64"));
        this.f6487c = Boolean.valueOf(readableMap.getBoolean("includeExtra"));
        String string = readableMap.getString("videoQuality");
        if (!TextUtils.isEmpty(string) && !string.toLowerCase().equals("high")) {
            this.f6488d = 0;
        }
        if (readableMap.getString("cameraType").equals("front")) {
            this.j = Boolean.TRUE;
        }
        if (readableMap.hasKey("forceGetContent") && readableMap.getBoolean("forceGetContent")) {
            this.k = Boolean.TRUE;
        }
        this.f6489e = (int) (readableMap.getDouble("quality") * 100.0d);
        this.f6491g = readableMap.getInt(ViewProps.MAX_HEIGHT);
        this.f6490f = readableMap.getInt(ViewProps.MAX_WIDTH);
        this.f6492h = Boolean.valueOf(readableMap.getBoolean("saveToPhotos"));
        this.f6493i = readableMap.getInt("durationLimit");
    }
}
