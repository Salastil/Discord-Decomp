package y9;

import android.icu.text.DecimalFormat;
import android.icu.text.DecimalFormatSymbols;
import android.icu.text.NumberFormat;
import android.icu.text.UFormat;
import android.icu.util.MeasureUnit;
import android.os.Build;

/* loaded from: classes3.dex */
public final class c0 implements y {
    public UFormat a;

    /* renamed from: b, reason: collision with root package name */
    public NumberFormat f20696b;

    /* renamed from: c, reason: collision with root package name */
    public b0 f20697c;

    /* renamed from: d, reason: collision with root package name */
    public w f20698d;

    /* renamed from: e, reason: collision with root package name */
    public MeasureUnit f20699e;

    /* JADX WARN: Code restructure failed: missing block: B:17:0x0031, code lost:
    
        if (r9 != 3) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x001e, code lost:
    
        if (r9 != 3) goto L28;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final y a(v vVar) {
        NumberFormat numberFormat = this.f20696b;
        if (numberFormat instanceof DecimalFormat) {
            DecimalFormat decimalFormat = (DecimalFormat) numberFormat;
            DecimalFormatSymbols decimalFormatSymbols = decimalFormat.getDecimalFormatSymbols();
            if (Build.VERSION.SDK_INT >= 31) {
                int ordinal = vVar.ordinal();
                if (ordinal != 1) {
                    if (ordinal == 2) {
                        decimalFormat.setSignAlwaysShown(false);
                        return this;
                    }
                }
                decimalFormat.setSignAlwaysShown(true);
                return this;
            }
            int ordinal2 = vVar.ordinal();
            if (ordinal2 != 1) {
                if (ordinal2 == 2) {
                    decimalFormat.setPositivePrefix("");
                    decimalFormat.setPositiveSuffix("");
                    decimalFormat.setNegativePrefix("");
                    decimalFormat.setNegativeSuffix("");
                    return this;
                }
            }
            if (!decimalFormat.getNegativePrefix().isEmpty()) {
                decimalFormat.setPositivePrefix(new String(new char[]{decimalFormatSymbols.getPlusSign()}));
            }
            if (!decimalFormat.getNegativeSuffix().isEmpty()) {
                decimalFormat.setPositiveSuffix(new String(new char[]{decimalFormatSymbols.getPlusSign()}));
            }
        }
        return this;
    }
}
