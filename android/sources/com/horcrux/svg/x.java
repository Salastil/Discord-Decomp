package com.horcrux.svg;

import app.rive.runtime.kotlin.fonts.Fonts;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.uimanager.ViewProps;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class x {

    /* renamed from: p, reason: collision with root package name */
    public static final x f6437p = new x();
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final String f6438b;

    /* renamed from: c, reason: collision with root package name */
    public final int f6439c;

    /* renamed from: d, reason: collision with root package name */
    public final ReadableMap f6440d;

    /* renamed from: e, reason: collision with root package name */
    public d2 f6441e;

    /* renamed from: f, reason: collision with root package name */
    public int f6442f;

    /* renamed from: g, reason: collision with root package name */
    public final String f6443g;

    /* renamed from: h, reason: collision with root package name */
    public final String f6444h;

    /* renamed from: i, reason: collision with root package name */
    public final int f6445i;
    public final int j;
    public final e2 k;

    /* renamed from: l, reason: collision with root package name */
    public final double f6446l;

    /* renamed from: m, reason: collision with root package name */
    public final double f6447m;

    /* renamed from: n, reason: collision with root package name */
    public final double f6448n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f6449o;

    public x() {
        this.f6440d = null;
        this.f6438b = "";
        this.f6439c = 1;
        this.f6441e = d2.Normal;
        this.f6442f = ReactFontManager.TypefaceStyle.NORMAL;
        this.f6443g = "";
        this.f6444h = "";
        this.f6445i = 1;
        this.j = 1;
        this.k = e2.None;
        this.f6449o = false;
        this.f6446l = 0.0d;
        this.a = 12.0d;
        this.f6447m = 0.0d;
        this.f6448n = 0.0d;
    }

    public static double b(ReadableMap readableMap, String str, double d6, double d7, double d8) {
        return readableMap.getType(str) == ReadableType.Number ? readableMap.getDouble(str) : e4.f.q(d8, readableMap.getString(str), d6, d7);
    }

    public final void a(x xVar, double d6) {
        long round = Math.round(d6);
        if (round < 1 || round > 1000) {
            this.f6442f = xVar.f6442f;
            this.f6441e = xVar.f6441e;
        } else {
            int i5 = (int) round;
            this.f6442f = i5;
            this.f6441e = w.a[Math.round(i5 / 100.0f)];
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:113:0x0062, code lost:
    
        if (r12 < 900) goto L35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:122:0x0078, code lost:
    
        if (r12 < 750) goto L17;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public x(ReadableMap readableMap, x xVar, double d6) {
        ReadableMap readableMap2;
        int i5;
        String str;
        String str2;
        int i6;
        e2 e2Var;
        double d7;
        double d8;
        double d10;
        double d11;
        int i10;
        double d12 = xVar.a;
        if (readableMap.hasKey(ViewProps.FONT_SIZE)) {
            readableMap2 = readableMap;
            this.a = b(readableMap, ViewProps.FONT_SIZE, 1.0d, d12, d12);
        } else {
            readableMap2 = readableMap;
            this.a = d12;
        }
        if (readableMap2.hasKey(ViewProps.FONT_WEIGHT)) {
            if (readableMap2.getType(ViewProps.FONT_WEIGHT) == ReadableType.Number) {
                a(xVar, readableMap2.getDouble(ViewProps.FONT_WEIGHT));
            } else {
                String string = readableMap2.getString(ViewProps.FONT_WEIGHT);
                HashMap hashMap = d2.J;
                if (hashMap.containsKey(string)) {
                    d2 d2Var = (d2) hashMap.get(string);
                    d2[] d2VarArr = w.a;
                    d2 d2Var2 = d2.Bolder;
                    int i11 = ReactFontManager.TypefaceStyle.BOLD;
                    if (d2Var == d2Var2) {
                        i10 = xVar.f6442f;
                        if (i10 >= 350) {
                            if (i10 >= 550) {
                                i11 = 900;
                            }
                            this.f6442f = i11;
                            this.f6441e = w.a[Math.round(i11 / 100.0f)];
                        }
                        i11 = 400;
                        this.f6442f = i11;
                        this.f6441e = w.a[Math.round(i11 / 100.0f)];
                    } else {
                        if (d2Var == d2.Lighter) {
                            i10 = xVar.f6442f;
                            if (i10 >= 100) {
                                if (i10 < 550) {
                                    i11 = 100;
                                }
                            }
                            i11 = i10;
                        } else {
                            i11 = w.f6436b[d2Var.ordinal()];
                        }
                        this.f6442f = i11;
                        this.f6441e = w.a[Math.round(i11 / 100.0f)];
                    }
                } else if (string != null) {
                    a(xVar, Double.parseDouble(string));
                } else {
                    this.f6442f = xVar.f6442f;
                    this.f6441e = xVar.f6441e;
                }
            }
        } else {
            this.f6442f = xVar.f6442f;
            this.f6441e = xVar.f6441e;
        }
        this.f6440d = readableMap2.hasKey("fontData") ? readableMap2.getMap("fontData") : xVar.f6440d;
        this.f6438b = readableMap2.hasKey(ViewProps.FONT_FAMILY) ? readableMap2.getString(ViewProps.FONT_FAMILY) : xVar.f6438b;
        int i12 = 3;
        boolean z5 = true;
        if (readableMap2.hasKey(ViewProps.FONT_STYLE)) {
            String string2 = readableMap2.getString(ViewProps.FONT_STYLE);
            if (string2 == null) {
                throw new NullPointerException("Name is null");
            }
            if (string2.equals("normal")) {
                i5 = 1;
            } else if (string2.equals(Fonts.Font.STYLE_ITALIC)) {
                i5 = 2;
            } else {
                if (!string2.equals("oblique")) {
                    throw new IllegalArgumentException("No enum constant com.horcrux.svg.TextProperties.FontStyle.".concat(string2));
                }
                i5 = 3;
            }
        } else {
            i5 = xVar.f6439c;
        }
        this.f6439c = i5;
        if (readableMap2.hasKey("fontFeatureSettings")) {
            str = readableMap2.getString("fontFeatureSettings");
        } else {
            str = xVar.f6443g;
        }
        this.f6443g = str;
        if (readableMap2.hasKey("fontVariationSettings")) {
            str2 = readableMap2.getString("fontVariationSettings");
        } else {
            str2 = xVar.f6444h;
        }
        this.f6444h = str2;
        if (readableMap2.hasKey("fontVariantLigatures")) {
            String string3 = readableMap2.getString("fontVariantLigatures");
            if (string3 == null) {
                throw new NullPointerException("Name is null");
            }
            if (string3.equals("normal")) {
                i6 = 1;
            } else {
                if (!string3.equals("none")) {
                    throw new IllegalArgumentException("No enum constant com.horcrux.svg.TextProperties.FontVariantLigatures.".concat(string3));
                }
                i6 = 2;
            }
        } else {
            i6 = xVar.f6445i;
        }
        this.f6445i = i6;
        if (readableMap2.hasKey("textAnchor")) {
            String string4 = readableMap2.getString("textAnchor");
            if (string4 == null) {
                throw new NullPointerException("Name is null");
            }
            if (string4.equals(ViewProps.START)) {
                i12 = 1;
            } else if (string4.equals("middle")) {
                i12 = 2;
            } else if (!string4.equals(ViewProps.END)) {
                throw new IllegalArgumentException("No enum constant com.horcrux.svg.TextProperties.TextAnchor.".concat(string4));
            }
        } else {
            i12 = xVar.j;
        }
        this.j = i12;
        if (readableMap2.hasKey("textDecoration")) {
            String string5 = readableMap2.getString("textDecoration");
            HashMap hashMap2 = e2.f6342i;
            if (hashMap2.containsKey(string5)) {
                e2Var = (e2) hashMap2.get(string5);
            } else {
                throw new IllegalArgumentException(a3.e.k("Unknown String Value: ", string5));
            }
        } else {
            e2Var = xVar.k;
        }
        this.k = e2Var;
        boolean hasKey = readableMap2.hasKey("kerning");
        if (!hasKey && !xVar.f6449o) {
            z5 = false;
        }
        this.f6449o = z5;
        if (hasKey) {
            d7 = d6;
            d8 = b(readableMap2, "kerning", d7, this.a, 0.0d);
        } else {
            d7 = d6;
            d8 = xVar.f6446l;
        }
        this.f6446l = d8;
        if (readableMap2.hasKey("wordSpacing")) {
            d10 = b(readableMap2, "wordSpacing", d7, this.a, 0.0d);
        } else {
            d10 = xVar.f6447m;
        }
        this.f6447m = d10;
        if (readableMap2.hasKey(ViewProps.LETTER_SPACING)) {
            d11 = b(readableMap2, ViewProps.LETTER_SPACING, d7, this.a, 0.0d);
        } else {
            d11 = xVar.f6448n;
        }
        this.f6448n = d11;
    }
}
