package com.appsflyer.internal;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.Map;

/* loaded from: classes.dex */
public class AFa1jSDK {
    private static final byte[] $$a = null;
    private static final int $$b = 0;
    private static int $10 = 0;
    private static int $11 = 1;
    private static int $12 = 0;
    private static int $13 = 1;
    public static final Map AFInAppEventType;
    private static long afDebugLog;
    private static int afErrorLog;
    private static byte[] afErrorLogForExcManagerOnly;
    private static int afInfoLog;
    private static int afRDLog;
    private static int afWarnLog;

    /* renamed from: d, reason: collision with root package name */
    private static byte[] f3641d;

    /* renamed from: e, reason: collision with root package name */
    private static byte[] f3642e;
    private static long force;

    /* renamed from: i, reason: collision with root package name */
    private static Object f3643i;
    public static final Map unregisterClient;

    /* renamed from: v, reason: collision with root package name */
    private static long f3644v;

    /* renamed from: w, reason: collision with root package name */
    private static Object f3645w;

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0028, code lost:
    
        r3 = r2;
        r2 = r0;
        r0 = r9;
        r9 = r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x002e, code lost:
    
        r7 = (r7 + r8) - 3;
        com.appsflyer.internal.AFa1jSDK.$13 = (com.appsflyer.internal.AFa1jSDK.$12 + 47) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        r8 = r9;
        r9 = r0;
        r0 = r2;
        r2 = r3;
        r3 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0026, code lost:
    
        if (r0 == null) goto L10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0017, code lost:
    
        if (r0 == null) goto L10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x001a, code lost:
    
        r3 = 0;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String $$c(short s2, short s5, int i5) {
        int i6;
        int i10;
        int i11;
        byte[] bArr;
        byte[] bArr2;
        int i12;
        int i13 = $13 + 57;
        $12 = i13 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i13 % 2 != 0) {
            i6 = 13 - s2;
            i10 = i5 + 4;
            i11 = s5 + 68;
            bArr = $$a;
            bArr2 = new byte[i11];
        } else {
            i6 = 119 - s2;
            i10 = i5 + 4;
            i11 = s5 + 1;
            bArr = $$a;
            bArr2 = new byte[i11];
        }
        while (true) {
            int i14 = i12 + 1;
            bArr2[i12] = (byte) i6;
            int i15 = i10 + 1;
            if (i14 == i11) {
                return new String(bArr2, 0);
            }
            int i16 = bArr[i15];
            int i17 = i11;
            byte[] bArr3 = bArr2;
            byte[] bArr4 = bArr;
            i6 = (i6 + i16) - 3;
            $13 = ($12 + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            i11 = i17;
            i10 = i15;
            bArr = bArr4;
            bArr2 = bArr3;
            i12 = i14;
        }
    }

    /*  JADX ERROR: Type inference failed
        jadx.core.utils.exceptions.JadxOverflowException: Type inference error: updates count limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.visit(TypeInferenceVisitor.java:77)
        */
    static {
        /*
            Method dump skipped, instructions count: 7770
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.appsflyer.internal.AFa1jSDK.<clinit>():void");
    }

    private AFa1jSDK() {
    }

    public static Object AFAdRevenueData(int i5, char c6, int i6) {
        int i10 = $10;
        int i11 = (i10 & 115) + (i10 | 115);
        int i12 = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        $11 = i12;
        if (i11 % 2 == 0) {
            throw null;
        }
        Object obj = f3645w;
        $10 = (((i12 | 113) << 1) - (i12 ^ 113)) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            Object[] objArr = {Integer.valueOf(i5), Character.valueOf(c6), Integer.valueOf(i6)};
            byte[] bArr = $$a;
            byte b10 = bArr[84];
            byte b11 = bArr[488];
            Class<?> cls = Class.forName($$c(b10, b11, (short) ((b11 ^ 530) | (b11 & 530))), true, (ClassLoader) f3643i);
            byte b12 = bArr[4];
            byte b13 = bArr[49];
            int i13 = $$b;
            String $$c = $$c(b12, b13, (short) ((i13 & 1097) | (i13 ^ 1097)));
            Class cls2 = Integer.TYPE;
            Object invoke = cls.getMethod($$c, cls2, Character.TYPE, cls2).invoke(obj, objArr);
            int i14 = $11;
            $10 = (((i14 | 81) << 1) - (i14 ^ 81)) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return invoke;
        } catch (Throwable th2) {
            Throwable cause = th2.getCause();
            if (cause != null) {
                throw cause;
            }
            throw th2;
        }
    }

    public static int getMediationNetwork(int i5) {
        int i6 = $11;
        int i10 = (i6 & 117) + (i6 | 117);
        int i11 = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        $10 = i11;
        if (i10 % 2 != 0) {
            throw null;
        }
        Object obj = f3645w;
        $11 = (i11 + 101) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            Object[] objArr = {Integer.valueOf(i5)};
            byte[] bArr = $$a;
            byte b10 = bArr[84];
            byte b11 = bArr[488];
            Class<?> cls = Class.forName($$c(b10, b11, (short) ((b11 ^ 530) | (b11 & 530))), true, (ClassLoader) f3643i);
            byte b12 = bArr[4];
            byte b13 = bArr[14];
            int intValue = ((Integer) cls.getMethod($$c(b12, b13, (short) (b13 | 576)), Integer.TYPE).invoke(obj, objArr)).intValue();
            int i12 = $10 + 77;
            $11 = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i12 % 2 != 0) {
                return intValue;
            }
            throw null;
        } catch (Throwable th2) {
            Throwable cause = th2.getCause();
            if (cause != null) {
                throw cause;
            }
            throw th2;
        }
    }

    public static int getMonetizationNetwork(Object obj) {
        int i5 = $11;
        int i6 = (i5 & 7) + (i5 | 7);
        int i10 = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        $10 = i10;
        if (i6 % 2 != 0) {
            throw null;
        }
        Object obj2 = f3645w;
        $11 = ((i10 & 71) + (i10 | 71)) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            byte[] bArr = $$a;
            byte b10 = bArr[84];
            byte b11 = bArr[488];
            int intValue = ((Integer) Class.forName($$c(b10, b11, (short) (b11 | 530)), true, (ClassLoader) f3643i).getMethod($$c(bArr[62], bArr[12], (short) 1152), Object.class).invoke(obj2, obj)).intValue();
            int currentTimeMillis = (int) System.currentTimeMillis();
            int i11 = ~currentTimeMillis;
            int i12 = ~((i11 & (-1521606923)) | ((-1521606923) ^ i11));
            int i13 = ~currentTimeMillis;
            int i14 = (((~((i13 & (-864216280)) | ((-864216280) ^ i13))) | 553780437) * 933) + (((i12 & (-864216280)) | ((-864216280) ^ i12)) * (-933)) + 1550969792;
            int i15 = ((i14 | 693843616) << 1) - (i14 ^ 693843616);
            int currentTimeMillis2 = (int) System.currentTimeMillis();
            int i16 = (~(((-214422119) & currentTimeMillis2) | ((-214422119) ^ currentTimeMillis2))) | 134664224;
            int i17 = ~currentTimeMillis2;
            int i18 = (i17 ^ 689370536) | (i17 & 689370536);
            int i19 = ~(i18 | 214422118);
            int i20 = (((i16 & i19) | (i16 ^ i19)) * 886) + 1698234858;
            int i21 = ~((i17 & 214422118) | (i17 ^ 214422118));
            int i22 = ((i21 & 689370536) | (689370536 ^ i21)) * (-1772);
            int i23 = ((i20 | i22) << 1) - (i22 ^ i20);
            int i24 = -(-((~i18) * 886));
            if (i15 > (i23 & i24) + (i24 | i23)) {
                int i25 = 0 / 0;
            }
            return intValue;
        } catch (Throwable th2) {
            Throwable cause = th2.getCause();
            if (cause != null) {
                throw cause;
            }
            throw th2;
        }
    }

    public static void init$0() {
        $11 = ($10 + 85) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        byte[] bArr = new byte[1171];
        System.arraycopy("\bâ\u001cã\u0010ù\u0011\u0000ýþÍ<\u000eò\u0012û\u0004ý\u0013¾\u0018/\u0000\u0006\u0006ö\u0002\u000f\u0001Å5\u0012\u0003\u0006ö\t\u0010ï\u0010À=\b\tô\u0010ÿö\u000eÆ\u0015\b\u001eÓ5óô\n\u000b\u0003\u000f\u0001Ä6\u0012\u0003\u0006ö\t\u0010ï\u0010\u0010ù\u0011\u0000ýþÍ6\u0012\u0003Á\u0016%\u0014ø\u0010ö\u000e\bÞ\u0017\röÿ\u0006\u0015\u0000\u0003ö\f\tÐ2\u0003ÿ\u0000ý\u0001\u0016ø\t\u0002\u0010ù\u0011\u0000ýþÍ6\u0012\u0003Á\u00162\u0003Ú(\u0006ö\u0002\u000e\n\u0001\u0012Ø(þ\u000eøû\u000eØ2\u0003ÿ\u0000ý\u0001\u0016ø\t\u0002\u0001\u0012Õ&\u0006ü\u0011Ô(\f\u0001\u0012Ò/ø\u0004á!\u0005\b\u0000â(\f\u0001\u0012Ò!\u0005\b\u0000â(\f8\u0000\u0016ðÑ8\u0000\u0016ðÑú\u0018îÐ>\tÂ\u001b&\u0006üú\u0018îÐ>\tÂIü\u0006÷\b\fú\u0018îÐAø\u0010üÊ()ý\u0004ô\u000b\u0001\u0012ß%\u0000\u0004ø\u0010\u0005\b\u000fø\u0004ý\u0007\u0001\u0005\b\u0000\u0010ù\u0011\u0000ýþÍD\u0007¾\u00176÷\u0006ûÃ5ò\u0010\u0004ù\t\u0002ô\n\u0017í\b\t\u0001\u0010ì\u001eú\u000eôî\tí\u000bú\u0018îÐ>\tÂ\u001e\tù6î\u0005\u000e\u0007ø\t\u0002\u0015\u0000\u0003ö\f\tã\u0018\u0007ûë\u001f\u0006\u0003\u0000\rú\u0018îÐ>\tÂ\u001b&\u0006üí)\u0002ÿ\b\u0002â$\u0001öÿ\u000f\f\u0006\u0007õî\u0006ð\u000b5\u0015\u0003õ\u0012\u0002¿7\u000f\u0001Å5\u0012\u0003\u0006ö\t\u0010ï\u0010À=\b\tô\u0010ÿö\u000eÆ\u00057\u0004Ñ5Î\u00025Ú+\u0006\u0005\u0001\u0000\u0006Ø+Ï\u0001\u0012á\u0016\u0011ÿ\t\u0000ô\u0005ú\u0018îÐCú\u0012½*\u0000ý\u0001\u0012ß\u0014\u0016÷ú\u0018îÐ>\tÂ\u00176ô\u0003\u0002\u0010ö\u0002è(\u0005\b\u0002â$\u0001öÿ\u000fú\u0018îÐ>\tÂ\u001e(\u0005\b\u0002â$\u0001öÿ\u000fú\u0018îÐ>\tÂ\u0019 \u0016ðë(\u0005\b\u0002â$\u0001öÿ\u000föÿ\u0006å2ú\u0003\u0010ú\u0018îÐ>\tÂ\u0017:þôß4\u0003ò\u001bÓ(\u0005\b\u0002â$\u0001öÿ\u000f\u000f\u0001Ä6\u0012\u0003\u0006ö\t\u0010ï\u0010¿>\b\tô\u0010ÿö\u000eÅ\u0016\b(É?éô\n\u000f\u0001Ä6\u0012\u0003\u0006ö\t\u0010ï\u0010¿>\b\tô\u0010ÿö\u000eÅ\u0016\b\u001eÓ5óô\n\u000b\u0003\u0001\u0012Ü\u001b\u0002\bû\u0016ø\t\u0002ã\u001a\u0012\u0006û\u0006üû\u0001\nöÿ\u0006õ\u0012á\u0016ÿ\u0006î\"\u0001\u0010î\u0007ï\u000bþú\u000eô\u0001\u0012Õ\u0001ú\u0018îÐ>\tÂ\u001b&\u0006üâ$\u0011ó\u0012ú\n\u0007þ\u0006\tøø\u0000\u000e\rö\u0005ÆH\tý\u0004ô\u000bÄ\u0019$\u0016Ñ&\u0006ü\u0006õ\u0006ã$\u0016\u0001\u0012Ð$\u0014ÿ\u0000\f\u0002ôî\u0014\u0016÷\u0004\nü\u0012ô\u0001\u0012Ò,ø\u0015\u0003Ü&õ\u0006\u0004\u0010ú\u0018îÐJ\u0002ø\u0006ÅOò\nÁ/\u0012\nÜ(\u0005\b\u0002â$\u0001öÿ\u000f\u0001\u0012Ý\u001a\u0016ÿÔ,\t\u0001\nú\u0018îÐJ\u0002ø\u0006ÅOò\nÁ/\u0012\nØ,\t\u0001\n\u0001\u0012â\u0019\u0014îú\u0018îÐ>\tÂ\u0017:þôß4\u0003ò\u001bÙ)\u0002ÿ\b\u0002â$\u0001öÿ\u000fþÖ:þôß4\u0003ò\u001bú\u0018îÐ>\tÂ\u0018,\u0006\u0007õÿ\u0004\rü\u0000\u000e\rö\u0005ÆH\tý\u0004ô\u000bÄ\u001e(â\u001b\u000b\u0005\u0006\nÎ$\u0016Î,ø\u0015\u0003Ü&õ\u0006\u0004\u0010ú\u0018îÐCþ\tÂ\u0017:þôà6ô\u0003\u0002\u0010ú\u0018îÐAø\u0010üÊ\u0018,ø\u0015\u0003Ü&õ\u0006\u0004\u0010þò\u0012\u0000\u000e\rö\u0005ÆH\tý\u0004ô\u000bÄ\u0017\"\u0015õâ$\u0016Î,ø\u0015\u0003Ü&õ\u0006\u0004\u0010ô\u0016÷ç \r\u0004ö\u0016ø\u0010òê ü\u0013ò\u0014\nÎ(\fö\u0001\u0014þ\u0006úÿ\u0011ö\u0016ø\u0010òê ü\u0013ò\u0014\nÚ\u0014\u0016÷à*ü\u000bû\f\t\u0002\u0001\u0012Ò/\u0001\u0006\u0002\u0002ú\f\tã(úøî\u000bë\u000b\u0006õ\u0006â,ø\u0015\u0003\u000f\u0001Å5\u0012\u0003\u0006ö\t\u0010ï\u0010À=\b\tô\u0010ÿö\u000eÆ\u0015\b\u001eÓ<ìô\nÜH5\u0015\u0003õ\u0012\u0002¿7\u000f\u0001Å5\u0012\u0003\u0006ö\t\u0010ï\u0010À=\b\tô\u0010ÿö\u000eÆ\f\u00001\u0002\u0005\u0001Øý7Ð\u0005\u00007×-Ô1Îî\nì\u000bI\u0004´Iþ\u000e\u0003ù\u0002\u0005\u000b\u000b°Oü\u0004\u0011¸\u0001\u0012Ò5\u0000\u0003ö\fø\u0019Ó-ÿÈ\u0001\u0002\t\u000f/ø\u0004\bþ&ñ\u0016\u0014ò\f\nóâ \u0016ð".getBytes("ISO-8859-1"), 0, bArr, 0, 1171);
        $$a = bArr;
        $$b = 34;
        int i5 = $10 + 115;
        $11 = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    private static void getMonetizationNetwork(int i5, int i6) {
        int i10 = $10;
        int i11 = (i10 & 55) + (i10 | 55);
        $11 = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i11 % 2 == 0) {
            throw null;
        }
    }
}
